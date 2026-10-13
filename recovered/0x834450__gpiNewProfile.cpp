// FUNCTION: BF2 0x834450
typedef int GPResult;
typedef int GPEnum;
typedef void* GPConnection;
typedef int GPErrorCode;
typedef void (*GPCallback)(void* arg, void* param);

#define GP_NO_ERROR (GPResult)0
#define GPIFalse 0
#define GP_BLOCKING 1
#define GP_PARAMETER_ERROR 2
#define GP_REPLACE 1
#define GP_DONT_REPLACE 0
#define GP_NICK_LEN 31

struct GPIOperation { char pad[0x10]; int blocking; char pad2[0x18]; int id; };
struct GPIBuffer { char pad[0x40]; };
struct GPIConnection
{
	char pad0[0x110];
	char nick[GP_NICK_LEN];            // 0x110
	char pad1[0x198 - 0x12f];
	int sessKey;                       // 0x198
	char pad2[0x268 - 0x19c];
	GPIBuffer outputBuffer;            // 0x268
};

extern "C" GPResult gpiAddOperation(GPConnection* connection, int type, void* data, GPIOperation** operation, GPEnum blocking, GPCallback callback, void* param);
extern "C" GPResult gpiAppendStringToBuffer(GPConnection* connection, GPIBuffer* buffer, const char* string);
extern "C" GPResult gpiAppendIntToBuffer(GPConnection* connection, GPIBuffer* buffer, int value);
extern "C" GPResult gpiProcess(GPConnection* connection, int operationID);
extern "C" void gpiRemoveOperation(GPConnection* connection, GPIOperation* operation);
extern "C" void gpiSetErrorString(GPConnection* connection, const char* string);
extern "C" char* strzcpy(char* dest, const char* src, int len);

#define CHECK_RESULT(x) { GPResult __result__ = (x); if (__result__ != GP_NO_ERROR) { return __result__; } }

GPResult gpiNewProfile(GPConnection* connection, const char* nick, GPEnum replace, GPEnum blocking, GPCallback callback, void* param)
{
	GPIConnection* iconnection = (GPIConnection*)*connection;
	GPIOperation* operation;
	GPResult result;
	char buffer[GP_NICK_LEN];

	// Error check.
	if (nick == 0)
	{
		gpiSetErrorString(connection, "Invalid nick.");
		return GP_PARAMETER_ERROR;
	}
	if ((replace != GP_REPLACE) && (replace != GP_DONT_REPLACE))
	{
		gpiSetErrorString(connection, "Invalid replace.");
		return GP_PARAMETER_ERROR;
	}

	// Create a new operation.
	CHECK_RESULT(gpiAddOperation(connection, 1, 0, &operation, blocking, callback, param));

	// Send the request.
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\newprofile\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\nick\\");
	strzcpy(buffer, nick, GP_NICK_LEN);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, buffer);
	if (replace == GP_REPLACE)
	{
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\replace\\");
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, 1);
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\oldnick\\");
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, iconnection->nick);
	}
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\id\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, operation->id);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	// Process it if blocking.
	if (operation->blocking)
	{
		result = gpiProcess(connection, operation->id);
		if (result != GP_NO_ERROR)
		{
			gpiRemoveOperation(connection, operation);
			return result;
		}
	}

	return GP_NO_ERROR;
}

// FUNCTION: BF2 0x834780
typedef int GPResult;
typedef int GPEnum;
typedef void* GPConnection;
typedef int GPErrorCode;
typedef void (*GPCallback)(void* arg, void* param);

#define GP_NO_ERROR (GPResult)0
#define GPIFalse 0
#define GP_BLOCKING 1
#define GP_MEMORY_ERROR (GPResult)-3

struct GPIOperation { char pad[0x2c]; int id; };
struct GPIBuffer { char pad[0x40]; };
struct GPIConnection
{
	char pad0[0x198];
	int sessKey;                 // 0x198
	char pad1[4];
	int profileid;               // 0x1a0
	char pad2[0x98];             // up to 0x23c
	int connectState;            // 0x23c
	char pad3[0x28];             // up to 0x268
	GPIBuffer outputBuffer;      // 0x268
};

extern "C" GPResult gpiAddOperation(GPConnection* connection, int type, void* data, GPIOperation** operation, GPEnum blocking, GPCallback callback, void* param);
extern "C" GPResult gpiAppendStringToBuffer(GPConnection* connection, GPIBuffer* buffer, const char* string);
extern "C" GPResult gpiAppendIntToBuffer(GPConnection* connection, GPIBuffer* buffer, int value);
extern "C" void gpiRemoveProfileByID(GPConnection* connection, int profileid);
extern "C" GPResult gpiProcess(GPConnection* connection, int operationID);
extern "C" void gpiRemoveOperation(GPConnection* connection, GPIOperation* operation);
extern "C" GPResult gpiDisconnect(GPConnection* connection, GPEnum blocking);

#define CHECK_RESULT(x) { GPResult __result__ = (x); if (__result__ != GP_NO_ERROR) { return __result__; } }

GPResult gpiDeleteProfile(GPConnection* connection, GPCallback callback, void* param)
{
	GPIConnection* iconnection = (GPIConnection*)*connection;
	GPIOperation* operation;
	GPResult result;

	CHECK_RESULT(gpiAddOperation(connection, 5, 0, &operation, GP_BLOCKING, callback, param));

	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\delprofile\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\id\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, operation->id);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	gpiRemoveProfileByID(connection, iconnection->profileid);

	iconnection->connectState = 5;
	result = gpiProcess(connection, operation->id);
	if (result != GP_NO_ERROR)
	{
		gpiRemoveOperation(connection, operation);
		return result;
	}

	gpiDisconnect(connection, GPIFalse);
	return GP_NO_ERROR;
}

// FUNCTION: BF2 0x83a410
typedef int GPResult;
typedef int GPEnum;
typedef int GPIBool;
typedef struct _GPConnection * GPConnection;
typedef void * GPCallback;
typedef int GPProfile;

struct GHIBuffer
{
	char * buffer;
	int size;
	int len;
	int pos;
};

struct GPIOperation_s
{
	int type;
	void * data;
	GPIBool blocking;
	GPCallback callback;
	void * param;
	int state;
	int id;
	GPResult result;
	struct GPIOperation_s * pnext;
};

struct GPIConnection
{
	char pad0[0x198];
	int sessKey;
	char pad1[0xcc];
	struct GHIBuffer outputBuffer;
};

#define GP_NO_ERROR            0
#define GPI_REGISTER_UNIQUENICK 4

extern "C" GPResult gpiAddOperation(GPConnection * connection, int type, void * data, struct GPIOperation_s ** operation, GPIBool blocking, GPCallback callback, void * param);
extern "C" GPResult gpiProcess(GPConnection * connection, int opId);
extern "C" GPResult gpiAppendStringToBuffer(GPConnection * connection, struct GHIBuffer * buffer, const char * string);
extern "C" GPResult gpiAppendIntToBuffer(GPConnection * connection, struct GHIBuffer * buffer, int value);

#define CHECK_RESULT(result)                { GPResult __result__ = (result); if(__result__ != GP_NO_ERROR) { return __result__; } }

static GPResult gpiSendRegisterUniqueNick(GPConnection * connection, const char * uniquenick, const char * cdkey, int operationid)
{
	struct GPIConnection * iconnection = (struct GPIConnection*)*connection;

	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\registernick\\\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\uniquenick\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, uniquenick);
	if(cdkey)
	{
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\cdkey\\");
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, cdkey);
	}
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\id\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, operationid);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}

extern "C" GPResult gpiRegisterUniqueNick(GPConnection * connection, const char * uniquenick, const char * cdkey, GPEnum blocking, GPCallback callback, void * param)
{
	struct GPIOperation_s * operation = 0;
	GPResult result;

	// Add the operation.
	/////////////////////
	CHECK_RESULT(gpiAddOperation(connection, GPI_REGISTER_UNIQUENICK, 0, &operation, blocking, callback, param));

	// Send a request for info.
	///////////////////////////
	result = gpiSendRegisterUniqueNick(connection, uniquenick, cdkey, operation->id);
	CHECK_RESULT(result);

	// Process it if blocking.
	//////////////////////////
	if(blocking)
	{
		result = gpiProcess(connection, operation->id);
		CHECK_RESULT(result);
	}

	return GP_NO_ERROR;
}

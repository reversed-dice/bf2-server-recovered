// FUNCTION: BF2 0x83a910
typedef int GPResult;
typedef int GPIBool;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIConnection
{
	char errorString[256];
	char pad0[0x394];
	int errorCode;
};
extern "C" int memcmp(const void * s1, const void * s2, unsigned long n);
extern "C" long __strtol_internal(const char * nptr, char ** endptr, int base, int group);
extern "C" char * strstr(const char * haystack, const char * needle);
extern "C" GPIBool gpiValueForKey(const char * command, const char * key, char * value, int len);
extern "C" void gpiCallErrorCallback(GPConnection * connection, GPResult result, int fatal);

GPIBool gpiCheckForError(GPConnection * connection, const char * input, GPIBool callErrorCallback)
{
	char buffer[16];
	GPIConnection * iconnection = (GPIConnection *)*connection;
	GPIBool ret = 0;

	if(memcmp(input, "\\error\\", 7) == 0)
	{
		if(gpiValueForKey(input, "\\err\\", buffer, sizeof(buffer)))
			iconnection->errorCode = (int)__strtol_internal(buffer, 0, 10, 0);

		if(!gpiValueForKey(input, "\\errmsg\\", iconnection->errorString, sizeof(iconnection->errorString)))
			iconnection->errorString[0] = '\0';

		if(callErrorCallback)
		{
			GPIBool fatal = (GPIBool)(strstr(input, "\\fatal\\") != 0);
			gpiCallErrorCallback(connection, 4, fatal ? 1 : 0);
		}

		ret = 1;
	}

	return ret;
}

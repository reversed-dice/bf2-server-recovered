// FUNCTION: BF2 0x835d50
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;
typedef int GPEnum;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPISearchData
{
	char pad0[0x38];
	char nick[0x1f];
	char uniquenick[0x15];
	char email[0x33];
	char pad1[0x3e];
	char password[0x1f];
	char cdkey[0x41];
};

typedef void GPCallback(void * arg, GPResult result, void * param);

extern "C" {
GPResult gpiInitSearchData(GPConnection * connection, GPISearchData ** data, int type);
GPResult gpiStartSearch(GPConnection * connection, GPISearchData * data, GPEnum blocking, GPCallback * callback, void * param);
char * strzcpy(char * dest, const char * src, int len);
}

#define CHECK_RESULT(result) { GPResult __result__ = (result); if(__result__ != 0) return __result__; }

GPResult gpiNewUser(GPConnection * connection, const char * nick, const char * uniquenick, const char * email, const char * password, const char * cdkey, GPEnum blocking, GPCallback * callback, void * param)
{
	GPISearchData * data;

	CHECK_RESULT(gpiInitSearchData(connection, &data, 6));

	strzcpy(data->email, email, 0x33);
	strzcpy(data->nick, nick, 0x1f);
	strzcpy(data->password, password, 0x1f);
	strzcpy(data->uniquenick, uniquenick, 0x15);
	if(cdkey)
		strzcpy(data->cdkey, cdkey, 0x41);

	CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

	return 0;
}

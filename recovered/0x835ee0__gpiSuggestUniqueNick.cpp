// FUNCTION: BF2 0x835ee0
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;
typedef int GPEnum;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPISearchData
{
	char pad0[0x57];
	char uniquenick[0x40];
};

typedef void GPCallback(void * arg, GPResult result, void * param);

extern "C" {
GPResult gpiInitSearchData(GPConnection * connection, GPISearchData ** data, int type);
GPResult gpiStartSearch(GPConnection * connection, GPISearchData * data, GPEnum blocking, GPCallback * callback, void * param);
char * strzcpy(char * dest, const char * src, int len);
}

#define CHECK_RESULT(result) { GPResult __result__ = (result); if(__result__ != 0) return __result__; }

GPResult gpiSuggestUniqueNick(GPConnection * connection, const char * desirednick, GPEnum blocking, GPCallback * callback, void * param)
{
	GPISearchData * data;

	CHECK_RESULT(gpiInitSearchData(connection, &data, 8));

	strzcpy(data->uniquenick, desirednick, 0x15);

	CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

	return 0;
}

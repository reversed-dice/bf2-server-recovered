
// FUNCTION: BF2 0x835aa0
typedef int GPResult;
typedef int GPEnum;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
typedef void (* GPCallback)(void * arg, void * param);
struct GPISearchData
{
	char pad0[0x6c];
	char email[0x33];
	char pad1[0x3e];
	char password[0x1f];
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" unsigned long strlen(const char * s);
extern "C" int gpiInitSearchData(GPConnection * connection, GPISearchData ** data, GPEnum type);
extern "C" char * strzcpy(char * dest, const char * src, int len);
extern "C" char * _strlwr(char * string);
extern "C" GPResult gpiStartSearch(GPConnection * connection, GPISearchData * data, GPEnum blocking, GPCallback callback, void * param);

GPResult gpiGetUserNicks(GPConnection * connection, const char email[0x33], const char password[0x1f], GPEnum blocking, GPCallback callback, void * param)
{
	GPISearchData * data;
	GPResult result;

	if((email == 0) || (*email == '\0') || (strlen(email) >= 0x33))
	{
		gpiSetErrorString(connection, "Invalid e-mail.");
		return 2;
	}

	if((password == 0) || (strlen(password) >= 0x1f))
	{
		gpiSetErrorString(connection, "Invalid password.");
		return 2;
	}

	{ GPResult __r = gpiInitSearchData(connection, &data, 3); if (__r != 0) return __r; }

	strzcpy(data->email, email, 0x33);
	_strlwr(data->email);

	strzcpy(data->password, password, 0x1f);

	{ GPResult __r = gpiStartSearch(connection, data, blocking, callback, param); if (__r != 0) return __r; }

	return 0;
}

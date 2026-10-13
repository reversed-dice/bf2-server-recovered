// FUNCTION: BF2 0x8359b0
typedef int GPResult;
typedef int GPEnum;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
typedef void (* GPCallback)(void * arg, void * param);
struct GPISearchData
{
	char pad0[0x6c];
	char email[0x33];
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" unsigned long strlen(const char * s);
extern "C" GPResult gpiInitSearchData(GPConnection * connection, GPISearchData ** data, GPEnum type);
extern "C" char * strzcpy(char * dest, const char * src, int len);
extern "C" char * _strlwr(char * string);
extern "C" GPResult gpiStartSearch(GPConnection * connection, GPISearchData * data, GPEnum blocking, GPCallback callback, void * param);

GPResult gpiIsValidEmail(GPConnection * connection, const char * email, GPEnum blocking, GPCallback callback, void * param)
{
	GPISearchData * data;
	GPResult result = 2;

	if((email == 0) || (email[0] == '\0') || (strlen(email) > 0x32))
	{
		gpiSetErrorString(connection, "Invalid e-mail.");
	}
	else
	{
		result = gpiInitSearchData(connection, &data, 2);
		if(result == 0)
		{
			strzcpy(data->email, email, 0x33);
			_strlwr(data->email);
			GPResult r = gpiStartSearch(connection, data, blocking, callback, param);
			if(r != 0)
				result = r;
		}
	}
	return result;
}

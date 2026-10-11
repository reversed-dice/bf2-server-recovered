// FUNCTION: BF2 0x829e50
typedef int GPResult;
typedef int GPEnum;

struct GPIConnection { char pad[0x108]; int simulation; };
struct GPConnectResponseArg { char b[32]; };
struct GPProfileSearchResponseArg { void* p0; int more; int pad; void* p1; };
#define GP_PARAMETER_ERROR 2
#define GP_DONE 0x0601

extern "C" unsigned long strlen(const char*);
extern "C" void* memset(void*, int, unsigned long);
extern "C" void gpiSetErrorString(void* connection, const char* str);
extern "C" GPResult gpiConnect(void* connection, const char* nick, const char* uniquenick, const char* email, const char* password, const char* authtoken, const char* partnerchallenge, const char* cdkey, GPEnum firewall, int newuser, GPEnum blocking, void* callback, void* param);
extern "C" GPResult gpiProfileSearch(void* connection, const char* nick, const char* uniquenick, const char* email, const char* firstname, const char* lastname, int icquin, int numProfiles, GPEnum blocking, void* callback, void* param);

GPResult gpProfileSearchA(void* connection, const char nick[], const char uniquenick[], const char email[], const char firstname[], const char lastname[], int icquin, GPEnum blocking, void* callback, void* param)
{
	struct GPIConnection* iconnection;
	if((connection == 0) || (*(void**)connection == 0)) return GP_PARAMETER_ERROR;
	if(callback == 0) { gpiSetErrorString(connection, "No callback."); return GP_PARAMETER_ERROR; }
	iconnection = *(struct GPIConnection**)connection;
	if(iconnection->simulation)
	{
		GPProfileSearchResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		arg.more = GP_DONE;
		((void (*)(void*, void*, void*))callback)(connection, &arg, param);
		return 0;
	}
	return gpiProfileSearch(connection, nick, uniquenick, email, firstname, lastname, icquin, 0, blocking, callback, param);
}

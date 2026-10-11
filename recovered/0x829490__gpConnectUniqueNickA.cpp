// FUNCTION: BF2 0x829490
typedef int GPResult;
typedef int GPEnum;

extern "C" void* memset(void*, int, unsigned long);
extern "C" void gpiSetErrorString(void* connection, const char* str);
extern "C" GPResult gpiConnect(void* connection, const char* nick, const char* uniquenick, const char* email, const char* password, const char* authtoken, const char* partnerchallenge, const char* cdkey, GPEnum firewall, int newuser, GPEnum blocking, void* callback, void* param);
extern "C" GPResult gpiCheckUser(void* connection, const char* nick, const char* email, const char* password, GPEnum blocking, void* callback, void* param);
extern "C" GPResult gpiSuggestUniqueNick(void* connection, const char* desirednick, GPEnum blocking, void* callback, void* param);

struct GPIConnection { char pad[0x108]; int simulation; };
struct GPConnectResponseArg { char b[32]; };
struct GPCheckResponseArg { char b[32]; };
struct GPSuggestUniqueNickResponseArg { char b[32]; };


GPResult gpConnectUniqueNickA(void* connection, const char uniquenick[], const char password[], GPEnum firewall, GPEnum blocking, void* callback, void* param)
{
	struct GPIConnection* iconnection;
	if((connection == 0) || (*(void**)connection == 0)) return 2;
	if((uniquenick == 0) || (uniquenick[0] == 0)) return 2;
	if((password == 0) || (password[0] == 0)) return 2;
	if(callback == 0) { gpiSetErrorString(connection, "No callback."); return 2; }
	iconnection = *(struct GPIConnection**)connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		((void (*)(void*, void*, void*))callback)(connection, &arg, param);
		return 0;
	}
	return gpiConnect(connection, "", uniquenick, "", password, "", "", 0, firewall, 0, blocking, callback, param);
}

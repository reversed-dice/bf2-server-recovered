// FUNCTION: BF2 0x829380
typedef int GPResult;
typedef int GPEnum;

extern "C" void* memset(void*, int, unsigned long);
extern "C" void gpiSetErrorString(void* connection, const char* str);
extern "C" GPResult gpiConnect(void* connection, const char* nick, const char* uniquenick, const char* email, const char* password, const char* authtoken, const char* partnerchallenge, const char* cdkey, GPEnum firewall, int newuser, GPEnum blocking, void* callback, void* param);

struct GPIConnection { char pad[0x108]; int simulation; };
struct GPConnectResponseArg { char b[32]; };

GPResult gpConnectNewUserA(void* connection, const char* nick, const char* uniquenick, const char* email, const char* password, const char* cdkey, GPEnum firewall, GPEnum blocking, void* callback, void* param)
{
	if((connection == 0) || (*(void**)connection == 0)) return 2;
	if((nick == 0) || (nick[0] == 0)) return 2;
	if(uniquenick == 0) uniquenick = "";
	if((email == 0) || (email[0] == 0)) return 2;
	if((password == 0) || (password[0] == 0)) return 2;
	if(cdkey && (cdkey[0] == 0)) cdkey = 0;
	if(callback == 0) { gpiSetErrorString(connection, "No callback."); return 2; }

	struct GPIConnection* iconnection = *(struct GPIConnection**)connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		((void (*)(void*, void*, void*))callback)(connection, &arg, param);
		return 0;
	}

	return gpiConnect(connection, nick, uniquenick, email, password, "", "", cdkey, firewall, 1, blocking, callback, param);
}

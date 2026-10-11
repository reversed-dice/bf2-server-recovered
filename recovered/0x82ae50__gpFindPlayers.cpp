// FUNCTION: BF2 0x82ae50
typedef int GPResult;
typedef int GPEnum;

extern "C" void* memset(void*, int, unsigned long);
extern "C" void gpiSetErrorString(void* connection, const char* str);
extern "C" GPResult gpiFindPlayers(void* connection, int productID, GPEnum blocking, void* callback, void* param);

struct GPIConnection { char pad[0x108]; int simulation; char pad2[0x23c - 0x10c]; int connectState; };
struct GPFindPlayersResponseArg { int f0; int productID; int numMatches; int pad; void* matches; };

GPResult gpFindPlayers(void* connection, int productID, GPEnum blocking, void* callback, void* param)
{
	struct GPIConnection* iconnection;
	if((connection == 0) || (*(void**)connection == 0)) return 2;
	if(callback == 0) { gpiSetErrorString(connection, "No callback."); return 2; }
	iconnection = *(struct GPIConnection**)connection;
	if(iconnection->connectState == 4) { gpiSetErrorString(connection, "The connection has already been disconnected."); return 2; }
	if(iconnection->simulation)
	{
		GPFindPlayersResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		arg.productID = productID;
		arg.numMatches = 0;
		arg.matches = 0;
		((void (*)(void*, void*, void*))callback)(connection, &arg, param);
		return 0;
	}
	return gpiFindPlayers(connection, productID, blocking, callback, param);
}

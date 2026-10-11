// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x833be0
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIPeer_s
{
	int state;
	char pad0[4];
	int sock;
	int profile;
	long timeout;
};
typedef struct GPIPeer_s GPIPeer;
extern "C" void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));
extern "C" unsigned long strlen(const char * s);
extern "C" int sprintf(char * buffer, const char * format, ...);
extern "C" GPResult gpiSendOrBufferString(GPConnection * connection, GPIPeer * peer, char * string);
extern "C" GPResult gpiSendOrBufferStringLen(GPConnection * connection, GPIPeer * peer, const char * string, int stringLen);
extern "C" GPResult gpiSendOrBufferChar(GPConnection * connection, GPIPeer * peer, char c);
extern "C" long time(long * t);

GPResult gpiPeerFinishTransferMessage(GPConnection * connection, GPIPeer * peer, const char * message, int len)
{
	char buffer[32];

	if(!peer)
		__assert_fail("peer != ((void *)0)", "External/GameSpy/gp/gpiPeer.c", 926, "__PRETTY_FUNCTION__.5915");

	if(!message)
		message = "";

	if(len == -1)
		len = (int)strlen(message);

	sprintf(buffer, "\\len\\%d\\msg\\\n", len);
	{
		GPResult result = gpiSendOrBufferString(connection, peer, buffer);
		if(result != 0)
			return result;
	}

	{
		GPResult result = gpiSendOrBufferStringLen(connection, peer, message, len);
		if(result != 0)
			return result;
	}

	{
		GPResult result = gpiSendOrBufferChar(connection, peer, '\0');
		if(result != 0)
			return result;
	}

	peer->timeout = (time(0) + 300);

	return 0;
}

// FUNCTION: BF2 0x82e500
typedef int GPIBool;
typedef int GPResult;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPIBuffer
{
	char * buffer;
	int size;
	int len;
	int pos;
};

struct GPIPeer
{
	char pad0[0x8];
	int sock;
	char pad1[0x2c];
	GPIBuffer outputBuffer;
	void * messages;
};
typedef struct GPIPeer * GPIPeer_st;

extern "C" {
void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
int ArrayLength(void * array);
GPResult gpiAppendCharToBuffer(GPConnection * connection, GPIBuffer * buffer, char c);
GPResult gpiSendData(GPConnection * connection, int sock, const char * data, int len, GPIBool * closed, int * sent, const char * prefix);
}

#define CHECK_RESULT(result) { GPResult __result__ = (result); if(__result__ != 0) return __result__; }

GPResult gpiSendOrBufferChar(GPConnection * connection, GPIPeer_st peer, char c)
{
	GPIBool closed;
	int sent;

	if(!(peer->outputBuffer.buffer != ((void *)0)))
		__assert_fail("peer->outputBuffer.buffer != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 0xe4, "GPResult gpiSendOrBufferChar(GPConnection*, GPIPeer_st, char)");

	if(!(peer->outputBuffer.len - peer->outputBuffer.pos) && !ArrayLength(peer->messages))
	{
		CHECK_RESULT(gpiSendData(connection, peer->sock, &c, 1, &closed, &sent, "PT"));
		if(sent)
			return 0;
	}

	return gpiAppendCharToBuffer(connection, &peer->outputBuffer, c);
}

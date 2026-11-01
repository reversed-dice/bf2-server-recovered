// BF2_FLAGS: -fcrossjumping
#include <string.h>

// FUNCTION: BF2 0x8339f0
typedef int GPResult;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPIBuffer
{
	char* buffer;
	int size;
	int len;
	long pos;
};

struct GPIPeer
{
	int state;
	int sock;
	int profile;
	long timeout;
	char pad2[0x50 - 0x18];
	void* messages;
};

struct GPIMsg
{
	GPIBuffer buffer;
	int type;
	int start;
};

#define CHECK_RESULT(x) { GPResult __result__ = (x); if (__result__ != 0) return __result__; }
extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
unsigned long strlen(const char* s);
GPResult gpiAppendStringToBuffer(GPConnection* connection, GPIBuffer* buffer, const char* string);
GPResult gpiAppendIntToBuffer(GPConnection* connection, GPIBuffer* buffer, int value);
GPResult gpiAppendStringToBufferLen(GPConnection* connection, GPIBuffer* buffer, const char* string, int len);
GPResult gpiAppendCharToBuffer(GPConnection* connection, GPIBuffer* buffer, char c);
void ArrayAppend(void* array, void* item);
long time(long* t);
}

GPResult gpiPeerAddMessage(GPConnection* connection, GPIPeer* peer, int len, const char* message)
{
	GPIMsg msg;
	GPResult result_unused;
	unsigned long slen;

	if (!peer)
		__assert_fail("peer != ((void *)0)", "External/GameSpy/gp/gpiPeer.c", 0x355, "gpiPeerAddMessage");

	if (!message)
		__assert_fail("message != ((void *)0)", "External/GameSpy/gp/gpiPeer.c", 0x356, "gpiPeerAddMessage");

	slen = strlen(message);

	memset(&msg, 0, sizeof(GPIMsg));
	msg.type = (int)len;

	CHECK_RESULT(gpiAppendStringToBuffer(connection, &msg.buffer, "\\m\\"));
	CHECK_RESULT(gpiAppendIntToBuffer(connection, &msg.buffer, len));
	CHECK_RESULT(gpiAppendStringToBuffer(connection, &msg.buffer, "\\len\\"));
	CHECK_RESULT(gpiAppendIntToBuffer(connection, &msg.buffer, (int)slen));
	CHECK_RESULT(gpiAppendStringToBuffer(connection, &msg.buffer, "\\msg\\\n"));
	msg.start = msg.buffer.len;
	CHECK_RESULT(gpiAppendStringToBufferLen(connection, &msg.buffer, message, (int)slen));
	CHECK_RESULT(gpiAppendCharToBuffer(connection, &msg.buffer, '\0'));

	ArrayAppend(peer->messages, &msg);

	peer->timeout = (time(0) + 300);

	return 0;
}

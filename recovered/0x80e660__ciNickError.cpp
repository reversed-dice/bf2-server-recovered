// FUNCTION: BF2 0x80e660
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));

typedef void *CHAT;
extern "C" void *memset(void *dst, int c, unsigned long n);

struct ciCallbackNickErrorParams {
	int type;                   // 0x0
	char *nick;                 // 0x8
	int numSuggestedNicks;      // 0x10
	char **suggestedNicks;      // 0x18
};

struct conn_s {
	int connected;              // 0x0
	int connecting;             // 0x4
	char pad0[0x10-0x8];
	void *nickErrorCallback;    // 0x10
	void *pad2;                 // 0x18
	void *connectCallback;      // 0x20
	void *connectParam;         // 0x28
};

extern "C" void ciAddCallback_(CHAT chat, int type, void *callback, void *param, void *instance, int zero, const char *target, unsigned long size);

void ciNickError(CHAT chat, int type, const char *nick, int numSuggestedNicks, char **suggestedNicks)
{
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0xbc7, "ciNickError");
	conn_s *connection = (conn_s *)chat;

	if(connection->nickErrorCallback)
	{
		ciCallbackNickErrorParams params;

		memset(&params, 0, sizeof(ciCallbackNickErrorParams));
		params.type = type;
		params.nick = (char *)nick;
		params.numSuggestedNicks = numSuggestedNicks;
		params.suggestedNicks = suggestedNicks;
		ciAddCallback_(chat, 25, (void*)connection->nickErrorCallback, &params, connection->connectParam, 0, 0, 0x20);
	}
	else
	{
		connection->connecting = 0;

		if(connection->connectCallback != 0)
			((void (*)(CHAT, int, int, void*))connection->connectCallback)(chat, 0, 1, connection->connectParam);
	}
}

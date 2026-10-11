// FUNCTION: BF2 0x80e280
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));

typedef void *CHAT;

struct ciCallbackDisconnectedParams {
	char *reason;
};

struct ciConnection {
	int connected;              // 0x0
	int connecting;             // 0x4
	int disconnected;           // 0x8
	char pad0[0x848-0xc];
	void *gcb_disconnected;     // 0x848
	void *gcb_privmsg;          // 0x850
	char pad1[0x860-0x858];
	void *gcb_param;            // 0x860
};

extern "C" void ciAddCallback_(CHAT chat, int type, void *callback, void *param, void *instance, int zero, const char *target, unsigned long size);

void ciHandleDisconnect(CHAT chat, const char *reason)
{
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x70, "ciHandleDisconnect");
	ciConnection *connection = (ciConnection *)chat;

	if(connection->disconnected)
		return;

	connection->connected = 0;
	connection->connecting = 0;
	connection->disconnected = 1;

	if(connection->gcb_disconnected != 0)
	{
		ciCallbackDisconnectedParams params;
		params.reason = (char *)reason;
		ciAddCallback_(chat, 1, (void*)connection->gcb_disconnected, &params, connection->gcb_param, 0, 0, 8);
	}
}

// FUNCTION: BF2 0x810a20
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
typedef void *CHAT;

struct ciConnection {
	int connected;              // 0x0
	char pad0[0x30 - 0x4];      // 0x4
	void *chatSocket;           // 0x30
};

extern "C" int ciSocketSendf(void *sock, const char *format, ...);
extern "C" int ciAddGETBANFilter(CHAT chat, const char *channel, void *callback, void *param);
extern "C" void ciThink(CHAT chat, int ID);
extern "C" int ciCheckForID(CHAT chat, int ID);
extern "C" void msleep(unsigned int msec);

void chatEnumChannelBansA(CHAT chat,
						  const char * channel,
						  void * callback,
						  void * param,
						  int blocking)
{
	int ID;
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x769, "chatEnumChannelBansA");
	ciConnection *connection = (ciConnection *)chat;

	if(!connection || !connection->connected)
		return;

	if (channel == 0)
		__assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x76c, "chatEnumChannelBansA");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x76c, "chatEnumChannelBansA");
	if (callback == 0)
		__assert_fail("callback != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x76d, "chatEnumChannelBansA");

	ciSocketSendf(&connection->chatSocket, "MODE %s +b", channel);

	ID = ciAddGETBANFilter(chat, channel, callback, param);

	if(blocking)
	{
		do
		{
			ciThink(chat, ID);
			msleep(10);
		}while(ciCheckForID(chat, ID));
	}
}

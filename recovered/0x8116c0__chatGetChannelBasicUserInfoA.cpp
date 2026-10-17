// FUNCTION: BF2 0x8116c0
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
typedef void *CHAT;

struct ciConnection {
	int connected;              // 0x0
	char pad0[0x30 - 0x4];      // 0x4
	void *chatSocket;           // 0x30
};

extern "C" int ciSocketSendf(void *sock, const char *format, ...);
extern "C" int ciAddCWHOFilter(CHAT chat, const char *channel, void *callback, void *param);
extern "C" void ciThink(CHAT chat, int ID);
extern "C" int ciCheckForID(CHAT chat, int ID);
extern "C" void msleep(unsigned int msec);

// compile-state padding: 15 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
void chatGetChannelBasicUserInfoA(CHAT chat,
								  const char * channel,
								  void * callback,
								  void * param,
								  int blocking)
{
	int ID;
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x92a, "chatGetChannelBasicUserInfoA");
	ciConnection *connection = (ciConnection *)chat;

	if(!connection || !connection->connected)
		return;

	if (channel == 0)
		__assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x92d, "chatGetChannelBasicUserInfoA");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x92d, "chatGetChannelBasicUserInfoA");
	if (callback == 0)
		__assert_fail("callback != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x92e, "chatGetChannelBasicUserInfoA");

	ciSocketSendf(&connection->chatSocket, "WHO %s", channel);

	ID = ciAddCWHOFilter(chat, channel, callback, param);

	if(blocking)
	{
		do
		{
			ciThink(chat, ID);
			msleep(10);
		}while(ciCheckForID(chat, ID));
	}
}

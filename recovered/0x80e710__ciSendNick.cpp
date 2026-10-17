// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x80e710
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));

typedef void *CHAT;

struct conn2_s {
	int connected;              // 0x0
	int connecting;             // 0x4
	char pad0[0x30-0x8];
	char chatSocket[0x3b0-0x30];// 0x30
	char nick[0x100];           // 0x3b0
	char pad1[0x4f0-0x4b0];
	int namespaceID;            // 0x4f0
	char pad2[0x534-0x4f4];
	char profilenick[0x3e8];   // 0x534
	int loginType;              // 0x91c
};

extern "C" int ciNickIsValid(const char *nick);
extern "C" int ciSocketSendf(void *sock, const char *fmt, ...);
extern "C" void ciNickError(CHAT chat, int type, const char *nick, int numSuggestedNicks, char **suggestedNicks);

// compile-state padding: 12 unused functions, see trick 378
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
void ciSendNick(CHAT chat)
{
	const char *nick;
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0xcb, "ciSendNick");
	conn2_s *connection = (conn2_s *)chat;

	if(connection->loginType == 0)
	{
		int validateNick = ciNickIsValid(connection->nick);
		if (validateNick != 0)
		{
			ciNickError(chat, validateNick, connection->nick, 0, 0);
			return;
		}
		nick = connection->nick;
	}
	else if((connection->loginType == 2) && (connection->namespaceID == 0))
	{
		int validateNick = ciNickIsValid(connection->profilenick);
		if (validateNick != 0)
		{
			ciNickError(chat, validateNick, connection->profilenick, 0, 0);
			return;
		}
		nick = connection->profilenick;
	}
	else
	{
		nick = "*";
	}

	ciSocketSendf(connection->chatSocket, "NICK %s", nick);
}

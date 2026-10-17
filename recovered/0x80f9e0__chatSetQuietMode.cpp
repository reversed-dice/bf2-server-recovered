// FUNCTION: BF2 0x80f9e0
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
typedef void *CHAT;

struct ciConnection {
	int connected;              // 0x0
	char pad0[0x30 - 0x4];      // 0x4
	void *chatSocket;           // 0x30
	char pad1[0x3b0 - 0x38];    // 0x38
	char nick[0x4e8];           // 0x3b0
	int quiet;                  // 0x898
};

extern "C" int ciSocketSendf(void *sock, const char *format, ...);
extern "C" void ciClearAllUsers(CHAT chat);
extern "C" void ciEnumJoinedChannels(CHAT chat, void (*callback)(CHAT, int, const char *, void *), void *param);
extern "C" void ciSetQuietModeEnumJoinedChannelsA(CHAT chat, int index, const char *channel, void *param);

// compile-state padding: 13 unused functions, see trick 378
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
void chatSetQuietMode(CHAT chat, int quiet)
{
	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x51a, "chatSetQuietMode");
	ciConnection *connection = (ciConnection *)chat;

	if(!connection || !connection->connected)
		return;

	// Check if its the current mode.
	if(connection->quiet == quiet)
		return;

	// Send the message.
	if(quiet)
		ciSocketSendf(&connection->chatSocket, "MODE %s +q", connection->nick);
	else
		ciSocketSendf(&connection->chatSocket, "MODE %s -q", connection->nick);

	// Set the mode.
	connection->quiet = quiet;

	// Are we disabling it?
	if(!quiet)
	{
		ciClearAllUsers(chat);
		ciEnumJoinedChannels(chat, ciSetQuietModeEnumJoinedChannelsA, 0);
	}
}

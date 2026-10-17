// FUNCTION: BF2 0x80d840
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

struct ciConnection
{
    CHATBool connected;
    CHATBool connecting;
};

#define CHAT_UNIQUENICK_EXPIRED 3

extern "C" void ciNickError(CHAT chat, int type, const char * nick, int numSuggestions, char ** suggestions);

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
extern "C" void ciErrUniqueNickExpiredHandler(CHAT chat, const void * message)
{
#line 4587 "External/GameSpy/chat/chatHandlers.c"
	if (!chat)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 4587, __PRETTY_FUNCTION__);
	ciConnection * connection = (ciConnection *)chat;

	if(connection->connecting)
		ciNickError(chat, CHAT_UNIQUENICK_EXPIRED, "", 0, (char**)0);

	(void)message;
}

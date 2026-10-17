// FUNCTION: BF2 0x80fe00
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

struct ciConnection
{
    CHATBool connected;
    char pad[0x30 - 4];
    int chatSocket;
};

extern "C" void ciSocketSendf(void * sock, const char * format, ...);
extern "C" void ciChannelLeft(CHAT chat, const char * channel);

// compile-state padding: 22 unused functions, see trick 378
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
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
extern "C" void chatLeaveChannelA(CHAT chat, const char * channel, const char * reason)
{
#line 1497 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1497, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return;

#line 1500 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1500, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 1500, __PRETTY_FUNCTION__);

    if (reason == (void*)0)
        reason = "";

    ciSocketSendf(&connection->chatSocket, "PART %s :%s", channel, reason);

    ciChannelLeft(chat, channel);
}

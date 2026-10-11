// FUNCTION: BF2 0x810c20
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

extern "C" void chatRemoveChannelBanA(CHAT chat, const char * channel, const char * ban)
{
#line 1951 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1951, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return;

#line 1954 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1954, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 1954, __PRETTY_FUNCTION__);

#line 1955 "External/GameSpy/chat/chatMain.c"
    if (!ban)
        __assert_fail("ban != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1955, __PRETTY_FUNCTION__);
    if (!ban[0])
        __assert_fail("ban [0] != '\\0'", "External/GameSpy/chat/chatMain.c", 1955, __PRETTY_FUNCTION__);

    ciSocketSendf(&connection->chatSocket, "MODE %s -b %s", channel, ban);
}

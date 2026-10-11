// FUNCTION: BF2 0x810cf0
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

extern "C" void chatSetChannelGroupA(CHAT chat, const char * channel, const char * group)
{
#line 1976 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1976, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return;

#line 1979 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1979, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 1979, __PRETTY_FUNCTION__);

    if (!group || !group[0])
        return;

    ciSocketSendf(&connection->chatSocket, "SETGROUP %s %s", channel, group);
}

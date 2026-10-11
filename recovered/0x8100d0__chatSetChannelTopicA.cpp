// FUNCTION: BF2 0x8100d0
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

extern "C" void chatSetChannelTopicA(CHAT chat, const char * channel, const char * topic)
{
#line 1582 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1582, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return;

#line 1585 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1585, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 1585, __PRETTY_FUNCTION__);

    if (topic == (void*)0)
        topic = "";

    ciSocketSendf(&connection->chatSocket, "TOPIC %s :%s", channel, topic);
}

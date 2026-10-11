// FUNCTION: BF2 0x810e50
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

#define CHATFalse 0
#define CHATTrue 1

struct ciConnection
{
    CHATBool connected;
};

extern "C" CHATBool ciInChannel(CHAT chat, const char * channel);

extern "C" CHATBool chatInChannelA(CHAT chat, const char * channel)
{
#line 2034 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 2034, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return CHATFalse;

#line 2038 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 2038, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 2038, __PRETTY_FUNCTION__);

    return ciInChannel(chat, channel);
}

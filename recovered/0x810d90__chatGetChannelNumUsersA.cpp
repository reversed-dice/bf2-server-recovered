// FUNCTION: BF2 0x810d90
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

struct ciConnection
{
    CHATBool connected;
};

extern "C" CHATBool ciInChannel(CHAT chat, const char * channel);
extern "C" int ciGetChannelNumUsers(CHAT chat, const char * channel);

extern "C" int chatGetChannelNumUsersA(CHAT chat, const char * channel)
{
#line 2004 "External/GameSpy/chat/chatMain.c"
    if (!chat)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 2004, __PRETTY_FUNCTION__);
    ciConnection * connection = (ciConnection *)chat;

    if (!connection->connected)
        return -1;

#line 2008 "External/GameSpy/chat/chatMain.c"
    if (!channel)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 2008, __PRETTY_FUNCTION__);
    if (!channel[0])
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 2008, __PRETTY_FUNCTION__);

    if (!ciInChannel(chat, channel))
        return -1;

    return ciGetChannelNumUsers(chat, channel);
}

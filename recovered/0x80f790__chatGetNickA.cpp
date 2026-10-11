// FUNCTION: BF2 0x80f790
typedef void * CHAT;

struct ciConnection {
    int connected;
    char pad[0x3b0 - 4];
    char nick[1];
};

extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
const char * chatGetNickA(CHAT chat);
}

const char * chatGetNickA(CHAT chat)
{
    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 1156, "__PRETTY_FUNCTION__.5961");

    ciConnection *connection = (ciConnection *)chat;
    if (!connection->connected)
        return "";

    return connection->nick;
}

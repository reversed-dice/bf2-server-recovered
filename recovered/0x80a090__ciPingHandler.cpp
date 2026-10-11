// FUNCTION: BF2 0x80a090
typedef void * CHAT;

struct ciServerMessage {
    char pad[0x38];
    const char *param;
};

extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
void ciSocketSendf(void *sock, const char *format, ...);
void ciPingHandler(CHAT chat, const ciServerMessage *message);
}

void ciPingHandler(CHAT chat, const ciServerMessage *message)
{
    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 1671, "__PRETTY_FUNCTION__.6351");

    ciSocketSendf((char *)chat + 0x30, "PONG %s", message->param);
}

// FUNCTION: BF2 0x80d790
typedef void * CHAT;
typedef void (*chatConnectCallback)(CHAT chat, int success, int reason, void *param);
struct ciConnection {
    char pad0[4];
    int connecting;
    char pad1[0x20 - 4 - 4];
    chatConnectCallback connectCallback;
    void *connectParam;
};

extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
void ciErrLoginFailedHandler(CHAT chat, void *message);
}

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
void ciErrLoginFailedHandler(CHAT chat, void *message)
{
    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x11c2, "__PRETTY_FUNCTION__.7773");

    ciConnection *connection = (ciConnection *)chat;
    if (connection->connecting)
    {
        connection->connecting = 0;
        if (connection->connectCallback != 0)
            connection->connectCallback(chat, 0, 2, connection->connectParam);
    }
}

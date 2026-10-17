// FUNCTION: BF2 0x810790
// chatGetChannelPasswordA
typedef struct {
    int connected;
    char pad[0x2c];
    void* chatSocket;
} ciConnection;

struct ciCallbackGetChannelPasswordParams {
    int success;
    char* channel;
    int enabled;
    char* password;
};

void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));
int ciInChannel(void* chat, const char* channel);
void* ciGetChannelPassword(void* chat, const char* channel);
int ciGetNextID(void* chat);
int ciAddCallback_(void* chat, int type, void* callback, void* callbackParams, void* param, int ID, const char* channel, unsigned long callbackParamsSize);
void ciThink(void* chat, int ID);
void msleep(int ms);
int ciCheckForID(void* chat, int ID);

// compile-state padding: 15 unused functions, see trick 378
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
void chatGetChannelPasswordA(void* chat, const char* channel, void* callback, void* param, int blocking)
{
    ciCallbackGetChannelPasswordParams params;
    const char* password;
    int ID;
    ciConnection* connection;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x71d, "chatGetChannelPasswordA");
    connection = (ciConnection*)chat;

    if (!connection || !connection->connected)
        return;

    if (channel == 0)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x720, "chatGetChannelPasswordA");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x720, "chatGetChannelPasswordA");

    if (callback == 0)
        __assert_fail("callback != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x721, "chatGetChannelPasswordA");

    if (!ciInChannel(chat, channel))
        return;

    password = (const char*)ciGetChannelPassword(chat, channel);
    if (password == 0)
        __assert_fail("password != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x72b, "chatGetChannelPasswordA");

    ID = ciGetNextID(chat);

    params.success = 1;
    params.channel = (char*)channel;
    params.enabled = 1;
    params.password = (char*)password;
    ciAddCallback_(chat, 0x12, callback, &params, param, ID, 0, sizeof(params));

    if (blocking)
    {
        do
        {
            ciThink(chat, ID);
            msleep(10);
        } while (ciCheckForID(chat, ID));
    }
}

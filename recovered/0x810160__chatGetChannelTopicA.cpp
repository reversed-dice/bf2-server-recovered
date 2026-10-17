// FUNCTION: BF2 0x810160
// chatGetChannelTopicA
typedef struct {
    int connected;
    char pad[0x2c];
    void* chatSocket;
} ciConnection;

struct ciCallbackGetChannelTopicParams {
    int success;
    char* channel;
    char* topic;
};

void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));
void ciSocketSendf(void* sock, const char* fmt, ...);
void* ciGetChannelTopic(void* chat, const char* channel);
int ciGetNextID(void* chat);
int ciAddCallback_(void* chat, int type, void* callback, void* callbackParams, void* param, int ID, const char* channel, unsigned long callbackParamsSize);
int ciAddTOPICFilter(void* chat, const char* channel, void* callback, void* param);
void ciThink(void* chat, int ID);
void msleep(int ms);
int ciCheckForID(void* chat, int ID);

// compile-state padding: 24 unused functions, see trick 378
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
extern "C" int __pad_22(int x) { int y = x * 22 + 3; return y; }
extern "C" int __pad_23(int x) { int y = x * 23 + 3; return y; }
void chatGetChannelTopicA(void* chat, const char* channel, void* callback, void* param, int blocking)
{
    int ID;
    const char* topic;
    ciConnection* connection;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x64d, "chatGetChannelTopicA");
    connection = (ciConnection*)chat;

    if (!connection || !connection->connected)
        return;

    if (channel == 0)
        __assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x650, "chatGetChannelTopicA");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x650, "chatGetChannelTopicA");

    if (callback == 0)
        __assert_fail("callback != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x651, "chatGetChannelTopicA");

    topic = (const char*)ciGetChannelTopic(chat, channel);
    if (topic)
    {
        ciCallbackGetChannelTopicParams params;

        ID = ciGetNextID(chat);

        params.success = 1;
        params.channel = (char*)channel;
        params.topic = (char*)topic;
        ciAddCallback_(chat, 0x10, callback, &params, param, ID, channel, sizeof(params));
    }
    else
    {
        ciSocketSendf(&connection->chatSocket, "TOPIC %s", channel);

        ID = ciAddTOPICFilter(chat, channel, callback, param);
    }

    if (blocking)
    {
        do
        {
            ciThink(chat, ID);
            msleep(10);
        } while (ciCheckForID(chat, ID));
    }
}

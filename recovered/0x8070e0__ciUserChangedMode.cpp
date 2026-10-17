// FUNCTION: BF2 0x8070e0
#include <cstring>
typedef int CHATBool;
typedef void* CHAT;
#define MAX_CHANNEL 257
#define MAX_NAME 128
struct conn_s { char pad[0x868]; void* channelTable; };
struct ciChatUser { char name[MAX_NAME]; char pad1[0xdc - MAX_NAME]; int mode; };
struct ciChatChannel {
    char name[MAX_CHANNEL];
    char pad0[0x140 - MAX_CHANNEL];
    void* userModeChanged;
    char pad1[0x18];
    void* param;
    void* users;
    char pad2[0x230 - 0x170];
};
struct ciCallbackUserModeChangedParams { char* channel; char* user; int mode; };

extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void* TableLookup(void* table, void* key);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

static const char* const CHATFILE = "External/GameSpy/chat/chatChannel.c";

// compile-state padding: 30 unused functions, see trick 378
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
extern "C" int __pad_24(int x) { int y = x * 24 + 3; return y; }
extern "C" int __pad_25(int x) { int y = x * 25 + 3; return y; }
extern "C" int __pad_26(int x) { int y = x * 26 + 3; return y; }
extern "C" int __pad_27(int x) { int y = x * 27 + 3; return y; }
extern "C" int __pad_28(int x) { int y = x * 28 + 3; return y; }
extern "C" int __pad_29(int x) { int y = x * 29 + 3; return y; }
void ciUserChangedMode(CHAT chat, const char* user, const char* channel, int mode, CHATBool enabled)
{
    ciChatChannel channelTemp;
    ciChatChannel* chatChannel;
    ciChatUser userTemp;
    ciChatUser* chatUser;
    ciCallbackUserModeChangedParams params;
    conn_s* connection = (conn_s*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", CHATFILE, 0x39b, "ciUserChangedMode");
    if (user == 0)
        __assert_fail("user != ((void *)0)", CHATFILE, 0x39d, "ciUserChangedMode");
    if (user[0] == '\0')
        __assert_fail("user[0] != '\\0'", CHATFILE, 0x39d, "ciUserChangedMode");
    if (strlen(user) >= MAX_NAME)
        __assert_fail("strlen(user) < 128", CHATFILE, 0x39d, "ciUserChangedMode");
    if (channel == 0)
        __assert_fail("channel != ((void *)0)", CHATFILE, 0x39e, "ciUserChangedMode");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", CHATFILE, 0x39e, "ciUserChangedMode");
    if ((mode < 0) || (mode > 3))
        __assert_fail("(mode >= 0) && (mode <= 3)", CHATFILE, 0x39f, "ciUserChangedMode");

    strncpy(channelTemp.name, channel, MAX_CHANNEL);
    channelTemp.name[MAX_CHANNEL - 1] = '\0';

    chatChannel = (ciChatChannel*)TableLookup(connection->channelTable, &channelTemp);
    if (chatChannel == 0)
        return;

    strncpy(userTemp.name, user, MAX_NAME);
    userTemp.name[MAX_NAME - 1] = '\0';

    chatUser = (ciChatUser*)TableLookup(chatChannel->users, &userTemp);
    if (chatUser == 0)
        return;

    if (enabled)
        chatUser->mode |= mode;
    else
        chatUser->mode &= ~mode;

    if (chatChannel->userModeChanged != 0)
    {
        params.channel = (char*)channel;
        params.user = (char*)user;
        params.mode = chatUser->mode;

        ciAddCallback_(chat, 0xb, chatChannel->userModeChanged, &params, chatChannel->param, 0, channel, sizeof(params));
    }
}

// FUNCTION: BF2 0x8066e0
#include <cstring>
typedef void* CHAT;
#define MAX_NAME 128
#define MAX_CACHED_USER 24
#define MAX_CACHED_ADDRESS 64
struct conn_s { char pad[0x868]; void* channelTable; };
struct ciChatUser {
    char name[MAX_NAME];
    char user[MAX_CACHED_USER];
    char address[MAX_CACHED_ADDRESS];
    int gotUserAndAddress;
    int mode;
};
struct ciChatChannel {
    char name[257];
    char pad0[0x140 - 257];
    void* userModeChanged;
    char pad1[0x18];
    void* param;
    void* users;
    char pad2[0x230 - 0x170];
};

extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void* TableEnter(void* table, void* elem);
extern "C" void* TableLookup(void* table, void* key);
extern "C" ciChatChannel* ciGetChannel(void* connection, const char* channel);

static const char* const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciUserEnteredChannel(CHAT chat, const char* name, const char* channel, int mode, const char* user, const char* address)
{
    ciChatUser chatUser;
    ciChatChannel* chatChannel;
    conn_s* connection = (conn_s*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", CHATFILE, 0x2d0, "ciUserEnteredChannel");
    if (name == 0)
        __assert_fail("name != ((void *)0)", CHATFILE, 0x2d2, "ciUserEnteredChannel");
    if (name[0] == '\0')
        __assert_fail("name[0] != '\\0'", CHATFILE, 0x2d2, "ciUserEnteredChannel");
    if (strlen(name) >= MAX_NAME)
        __assert_fail("strlen(name) < 128", CHATFILE, 0x2d2, "ciUserEnteredChannel");
    if (channel == 0)
        __assert_fail("channel != ((void *)0)", CHATFILE, 0x2d3, "ciUserEnteredChannel");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", CHATFILE, 0x2d3, "ciUserEnteredChannel");
    if ((mode < 0) || (mode > 3))
        __assert_fail("(mode >= 0) && (mode <= 3)", CHATFILE, 0x2d4, "ciUserEnteredChannel");

    chatChannel = ciGetChannel(connection, channel);
    if (!chatChannel)
        return;

    memset(&chatUser, 0, sizeof(ciChatUser));
    strncpy(chatUser.name, name, MAX_NAME);
    chatUser.name[MAX_NAME - 1] = '\0';
    if (user && address)
    {
        strncpy(chatUser.user, user, MAX_CACHED_USER);
        chatUser.user[MAX_CACHED_USER - 1] = '\0';
        strncpy(chatUser.address, address, MAX_CACHED_ADDRESS);
        chatUser.address[MAX_CACHED_ADDRESS - 1] = '\0';
        chatUser.gotUserAndAddress = 1;
    }
    else
    {
        chatUser.gotUserAndAddress = 0;
    }
    chatUser.mode = mode;

    TableEnter(chatChannel->users, &chatUser);

    if (TableLookup(chatChannel->users, &chatUser) == 0)
        __assert_fail("TableLookup(chatChannel->users, &chatUser) != ((void *)0)", CHATFILE, 0x2f7, "ciUserEnteredChannel");
}

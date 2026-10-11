// FUNCTION: BF2 0x8057c0
#include <cstring>
typedef void* CHAT;
#define MAX_CHANNEL 257
#define USER_HASH_BUCKETS 61
#define NOT_FOUND -1
struct conn_s { char pad[0x868]; void* channelTable; void* enteringChannelList; };
struct chatChannelCallbacks { char data[0x60]; };
struct ciChatUser { char name[128]; char user[24]; char address[64]; int gotUserAndAddress; int mode; };
struct ciChatChannel {
    char name[MAX_CHANNEL];
    char pad0[0x108 - MAX_CHANNEL];
    chatChannelCallbacks callbacks;
    void* users;
    char pad1[0x190 - 0x170];
    int gotMode;
    char pad2[4];
    char* password;
    int joinCallbackCalled;
    char topic[4];
    char pad3[0x228 - 0x1a8];
};

extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void* gsimalloc(unsigned int size);
extern "C" void* TableNew2(unsigned int elemSize, int buckets, int caseSensitive, unsigned int (*hashFn)(void*), int (*compareFn)(const void*, const void*), void (*freeFn)(void*));
extern "C" void* TableEnter(void* table, void* elem);
extern "C" int ArraySearch(void* array, void* elem, int (*compare)(const void*, const void*), int a, int b);
extern "C" void ArrayRemoveAt(void* array, int index);
extern "C" unsigned int ciUserTableHashFn(void* elem);
extern "C" int ciUserTableCompareFn(const void* a, const void* b);
extern "C" void ciUserTableElementFreeFn(void* elem);
extern "C" int ciEnteringChannelComparator(const void* a, const void* b);

static const char* const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciChannelEntered(CHAT chat, const char* channel, chatChannelCallbacks* callbacks)
{
    ciChatChannel chatChannel;
    char* password;
    int index;
    conn_s* connection = (conn_s*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", CHATFILE, 0x160, "ciChannelEntered");
    if (channel == 0)
        __assert_fail("channel != ((void *)0)", CHATFILE, 0x162, "ciChannelEntered");
    if (channel[0] == '\0')
        __assert_fail("channel[0] != '\\0'", CHATFILE, 0x162, "ciChannelEntered");
    if (strlen(channel) >= MAX_CHANNEL)
        __assert_fail("strlen(channel) < 257", CHATFILE, 0x162, "ciChannelEntered");
    if (callbacks == 0)
        __assert_fail("callbacks != ((void *)0)", CHATFILE, 0x163, "ciChannelEntered");

    password = (char*)gsimalloc(2);
    if (password == 0)
        return;
    strcpy(password, "");

    memset(&chatChannel, 0, sizeof(ciChatChannel));
    chatChannel.callbacks = *callbacks;
    strncpy(chatChannel.name, channel, MAX_CHANNEL);
    chatChannel.name[MAX_CHANNEL - 1] = '\0';
    chatChannel.users = TableNew2(sizeof(ciChatUser), USER_HASH_BUCKETS, 2, ciUserTableHashFn, ciUserTableCompareFn, ciUserTableElementFreeFn);
    if (chatChannel.users == 0)
        return;
    chatChannel.gotMode = 0;
    chatChannel.password = password;
    chatChannel.joinCallbackCalled = 0;
    chatChannel.topic[0] = '\0';

    index = ArraySearch(connection->enteringChannelList, &chatChannel, ciEnteringChannelComparator, 0, 0);
    if (index != NOT_FOUND)
        ArrayRemoveAt(connection->enteringChannelList, index);

    TableEnter(connection->channelTable, &chatChannel);
}

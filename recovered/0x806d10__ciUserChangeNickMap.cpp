// FUNCTION: BF2 0x806d10
#include <cstring>
typedef void* CHAT;
#define MAX_NAME 128
struct ciChatUser { char name[MAX_NAME]; char user[24]; char address[64]; int gotUserAndAddress; int mode; };
struct ciChatChannel {
    char name[257];
    char pad0[0x108 - 257];
    char cbs[0x20];
    void* userChangedNick;
    char pad1[0x160 - 0x130];
    void* param;
    void* users;
    char pad2[0x228 - 0x170];
};
struct ciUserChangedNickData { CHAT chat; const char* oldNick; const char* newNick; };
struct ciCallbackUserChangedNickParams { char* channel; char* oldNick; char* newNick; };

extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void* TableLookup(void* table, const void* key);
extern "C" int TableRemove(void* table, void* elem);
extern "C" void* TableEnter(void* table, void* elem);
extern "C" int ciWasJoinCallbackCalled(CHAT chat, const char* channel);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

static const char* const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciUserChangeNickMap(void* elem, void* clientData)
{
    ciChatChannel* channel;
    ciChatUser tempUser;
    ciChatUser* user;
    ciUserChangedNickData* data;
    ciCallbackUserChangedNickParams params;
    int rcode;

    if (elem == 0)
        __assert_fail("elem != ((void *)0)", CHATFILE, 0x34f, "ciUserChangeNickMap");
    if (clientData == 0)
        __assert_fail("clientData != ((void *)0)", CHATFILE, 0x350, "ciUserChangeNickMap");

    channel = (ciChatChannel*)elem;
    if (channel->users == 0)
        __assert_fail("channel->users != ((void *)0)", CHATFILE, 0x355, "ciUserChangeNickMap");

    data = (ciUserChangedNickData*)clientData;
    if (data->newNick == 0)
        __assert_fail("data->newNick != ((void *)0)", CHATFILE, 0x35a, "ciUserChangeNickMap");
    if (data->newNick[0] == '\0')
        __assert_fail("data->newNick[0] != '\\0'", CHATFILE, 0x35a, "ciUserChangeNickMap");
    if (strlen(data->newNick) >= MAX_NAME)
        __assert_fail("strlen(data->newNick) < 128", CHATFILE, 0x35a, "ciUserChangeNickMap");
    if (data->oldNick == 0)
        __assert_fail("data->oldNick != ((void *)0)", CHATFILE, 0x35b, "ciUserChangeNickMap");
    if (data->oldNick[0] == '\0')
        __assert_fail("data->oldNick[0] != '\\0'", CHATFILE, 0x35b, "ciUserChangeNickMap");
    if (strlen(data->oldNick) >= MAX_NAME)
        __assert_fail("strlen(data->oldNick) < 128", CHATFILE, 0x35b, "ciUserChangeNickMap");

    user = (ciChatUser*)TableLookup(channel->users, data->oldNick);
    if (user != 0)
    {
        memcpy(&tempUser, user, sizeof(ciChatUser));

        rcode = TableRemove(channel->users, user);
        if (rcode == 0)
            __assert_fail("rcode != 0", CHATFILE, 0x367, "ciUserChangeNickMap");
        user = &tempUser;

        strncpy(user->name, data->newNick, MAX_NAME);
        user->name[MAX_NAME - 1] = '\0';

        TableEnter(channel->users, user);

        if (ciWasJoinCallbackCalled(data->chat, channel->name))
        {
            if (channel->userChangedNick != 0)
            {
                params.channel = channel->name;
                params.oldNick = (char*)data->oldNick;
                params.newNick = (char*)data->newNick;
                ciAddCallback_(data->chat, 8, channel->userChangedNick, &params, channel->param, 0, channel->name, sizeof(params));
            }
        }
    }
}

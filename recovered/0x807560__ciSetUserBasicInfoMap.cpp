// FUNCTION: BF2 0x807560
extern "C" char* strncpy(char* dst, const char* src, unsigned long n);
extern "C" void* TableLookup(void* table, const char* key);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciChatUser
{
    char pad0[0x80];
    char user[0x18];
    char address[0x40];
    int gotUserAndAddress;
};

struct ciSetUserBasicInfoData
{
    char* chatUser;
    char* user;
    char* address;
};

void ciSetUserBasicInfoMap(void* elem, void* clientData)
{
    void* users;
    ciChatUser* user;
    ciSetUserBasicInfoData* data;

    if (elem == 0)
        __assert_fail("elem != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 0x41a, "ciSetUserBasicInfoMap");
    if (clientData == 0)
        __assert_fail("clientData != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 0x41b, "ciSetUserBasicInfoMap");

    data = (ciSetUserBasicInfoData*)clientData;

    users = *(void**)((char*)elem + 0x168);
    if (users == 0)
        __assert_fail("channel->users != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 0x424, "ciSetUserBasicInfoMap");

    user = (ciChatUser*)TableLookup(users, data->chatUser);
    if (user != 0)
    {
        strncpy(user->user, data->user, 0x18);
        user->user[0x17] = 0;
        strncpy(user->address, data->address, 0x40);
        user->address[0x3f] = 0;
        user->gotUserAndAddress = 1;
    }
}

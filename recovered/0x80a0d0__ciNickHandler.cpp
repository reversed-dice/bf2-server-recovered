// FUNCTION: BF2 0x80a0d0
typedef void* CHAT;
extern "C" int strcasecmp(...);
extern "C" unsigned long strlen(const char*);
extern "C" char* strncpy(char* dst, const char* src, unsigned long n);
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciFilterMatch { int type; const char* name; const char* name2; };
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciCallbackChangeNickParams { int success; char* oldNick; char* newNick; };
struct ciConnection { char pad[0x3b0]; char nick[0x40]; };

extern "C" void* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, void* filter, void* params);
extern "C" void ciUserChangedNick(CHAT chat, const char* oldNick, const char* newNick);

void ciNickHandler(CHAT chat, const ciServerMessage* message)
{
    char* oldNick;
    char* newNick;

    ciConnection* connection = (ciConnection*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x694, "ciNickHandler");
    if (message->numParams != 1)
        __assert_fail("message->numParams == 1", "External/GameSpy/chat/chatHandlers.c", 0x69a, "ciNickHandler");

    oldNick = message->nick;
    newNick = message->params[0];

    if (strcasecmp(oldNick, connection->nick) == 0)
    {
        void* filter;
        ciFilterMatch match;

        if (strlen(newNick) >= 64)
            __assert_fail("strlen(newNick) < 64", "External/GameSpy/chat/chatHandlers.c", 0x6aa, "ciNickHandler");
        strncpy(connection->nick, newNick, 64);
        connection->nick[63] = 0;

        memset(&match, 0, sizeof(ciFilterMatch));
        match.type = 9;
        match.name = oldNick;
        match.name2 = newNick;

        filter = ciFindFilter(chat, 1, &match);
        if (filter)
        {
            ciCallbackChangeNickParams params;
            params.success = 1;
            params.oldNick = oldNick;
            params.newNick = newNick;

            ciFinishFilter(chat, filter, &params);
        }
    }

    ciUserChangedNick(chat, oldNick, newNick);
}

// FUNCTION: BF2 0x80b4a0
typedef void* CHAT;
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciFilterMatch { int type; const char* name; const char* name2; };
struct ciServerMessage { char pad[0x40]; char** params; int numParams; };
struct ciConnection { int state; int connecting; char pad[0x3b0 - 8]; char nick[0x40]; };
struct ciCallbackChangeNickParams { int success; char* oldNick; char* newNick; };

extern "C" void* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, void* filter, void* params);
extern "C" void ciNickError(CHAT chat, int type, const char* nick, int param, void* instance);

void ciErrNickInUseHandler(CHAT chat, const ciServerMessage* message)
{
    char* oldNick;
    char* newNick;
    void* filter;
    ciFilterMatch match;

    ciConnection* connection = (ciConnection*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0xa6d, "ciErrNickInUseHandler");
    if (message->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0xa73, "ciErrNickInUseHandler");

    oldNick = message->params[0];
    newNick = message->params[1];

    memset(&match, 0, sizeof(ciFilterMatch));
    match.type = 9;
    match.name = oldNick;
    match.name2 = newNick;

    filter = ciFindFilter(chat, 1, &match);
    if (filter != 0)
    {
        ciCallbackChangeNickParams params;
        params.success = 0;
        params.oldNick = oldNick;
        params.newNick = newNick;

        ciFinishFilter(chat, filter, &params);
    }
    else
    {
        if (connection->connecting == 0)
            __assert_fail("connection->connecting", "External/GameSpy/chat/chatHandlers.c", 0xa93, "ciErrNickInUseHandler");
        if (connection->connecting)
            ciNickError(chat, 1, connection->nick, 0, 0);
    }
}

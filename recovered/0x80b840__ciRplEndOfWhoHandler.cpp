// FUNCTION: BF2 0x80b840
typedef void* CHAT;
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciFilterMatch { int type; const char* name; const char* name2; };
struct ciServerMessage { char pad[0x40]; char** params; int numParams; };
struct ciCallbackGetBasicUserInfoParams { int success; char* nick; char* user; char* address; };
struct ciCallbackGetChannelBasicUserInfoParams { int success; char* channel; char* nick; char* user; char* address; };

extern "C" void* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, void* filter, void* params);

void ciRplEndOfWhoHandler(CHAT chat, const ciServerMessage* message)
{
    ciFilterMatch matches[2];
    void* filter;
    char* name;

    if (message->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0xb0d, "ciRplEndOfWhoHandler");

    name = message->params[1];

    memset(matches, 0, sizeof(matches));
    matches[0].type = 10;
    matches[0].name = name;
    matches[1].type = 11;
    matches[1].name = name;

    filter = ciFindFilter(chat, 2, matches);
    if (!filter)
        return;

    if (((ciFilterMatch*)filter)->type == 10)
    {
        ciCallbackGetBasicUserInfoParams params;

        params.success = 0;
        params.nick = name;
        params.user = 0;
        params.address = 0;

        ciFinishFilter(chat, filter, &params);

        return;
    }

    if (((ciFilterMatch*)filter)->type == 11)
    {
        ciCallbackGetChannelBasicUserInfoParams params;

        params.success = 1;
        params.channel = name;
        params.nick = 0;
        params.user = 0;
        params.address = 0;

        ciFinishFilter(chat, filter, &params);

        return;
    }
}

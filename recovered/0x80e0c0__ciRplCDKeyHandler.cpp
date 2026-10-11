// FUNCTION: BF2 0x80e0c0
typedef void* CHAT;
extern "C" long __strtol_internal(const char* nptr, char** endptr, int base, int group);
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciFilterMatch { int type; const char* name; const char* name2; };
struct ciServerMessage { char pad[0x40]; char** params; int numParams; };
struct ciCallbackAuthenticateCDKeyParams { int result; char* message; };

extern "C" void* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, void* filter, void* params);

void ciRplCDKeyHandler(CHAT chat, const ciServerMessage* message)
{
    ciFilterMatch match;
    void* filter;
    int result;
    char* msg;

    if (message->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0x104e, "ciRplCDKeyHandler");

    result = (int)__strtol_internal(message->params[1], 0, 10, 0);
    msg = message->params[2];

    memset(&match, 0, sizeof(ciFilterMatch));
    match.type = 16;

    filter = ciFindFilter(chat, 1, &match);
    if (filter)
    {
        ciCallbackAuthenticateCDKeyParams params;
        params.result = result;
        params.message = msg;

        ciFinishFilter(chat, filter, &params);
    }
}

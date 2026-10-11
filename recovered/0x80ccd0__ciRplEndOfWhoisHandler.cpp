// FUNCTION: BF2 0x80ccd0
typedef void* CHAT;
typedef int CHATBool;
#define CHATTrue 1
struct ciFilterMatch { int type; char const* name; char const* name2; };
struct ciServerMessageFilter { char pad[0x30]; void* data; };
struct ciServerMessage { char pad[0x40]; char** params; int numParams; };
extern "C" void* memset(void*, int, unsigned long);
extern "C" ciServerMessageFilter* ciFindFilter(CHAT, int, ciFilterMatch*);
extern "C" void ciFinishFilter(CHAT, ciServerMessageFilter*, void*);

extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
struct WHOISData { char* user; char* name; char* address; int numChannels; char** channels; };
struct ParamsGetUserInfo { int success; char* nick; char* user; char* name; char* address; int numChannels; char** channels; };

void ciRplEndOfWhoisHandler(CHAT chat, void* message)
{
    char* nick;
    ciServerMessageFilter* filter;
    ciFilterMatch match;
    ciServerMessage* msg = (ciServerMessage*)message;

    if (msg->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0xf76, "ciRplEndOfWhoisHandler");

    nick = msg->params[1];

    memset(&match, 0, sizeof(ciFilterMatch));
    match.type = 4;
    match.name = nick;
    filter = ciFindFilter(chat, 1, &match);
    if (filter != 0)
    {
        WHOISData* data = (WHOISData*)filter->data;
        ParamsGetUserInfo params;
        params.success = (data->user != 0);
        params.nick = nick;
        params.user = data->user;
        params.name = data->name;
        params.address = data->address;
        params.numChannels = data->numChannels;
        params.channels = data->channels;
        ciFinishFilter(chat, filter, &params);
    }
}

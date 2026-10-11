// FUNCTION: BF2 0x80c9f0
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciFilterMatch { int type; int pad; char* name; char* name2; };
struct ciServerMessageFilter { int type; char pad[0x14]; void* callback; char pad2[0x10]; void* data; char pad3[8]; ciServerMessageFilter* pnext; };
struct WHOISData { char* user; char* name; char* address; };
struct BANData { char* channel; };
struct ciConnection { char pad[0x30]; void* chatSocket; };

extern "C" void* memset(void* s, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" ciServerMessageFilter* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" char* goastrdup(const char* str);
extern "C" int ciSocketSendf(void* sock, const char* fmt, ...);
extern "C" void ciFinishFilter(CHAT chat, ciServerMessageFilter* filter, void* params);

#define BF2_ASSERT(expr, line) __assert_fail(expr, "External/GameSpy/chat/chatHandlers.c", line, "ciRplWhoisUserHandler")

void ciRplWhoisUserHandler(CHAT chat, void* message)
{
    char* nick;
    ciFilterMatch matches[2];
    ciServerMessageFilter* filter;
    ciConnection* connection = (ciConnection*)chat;
    ciServerMessage* msg = (ciServerMessage*)message;

    if (chat == 0)
        BF2_ASSERT("chat != ((void *)0)", 0xed5);
    if (msg->numParams != 6)
        BF2_ASSERT("message->numParams == 6", 0xedb);

    nick = msg->params[1];

    memset(matches, 0, sizeof(matches));
    matches[0].type = 4;
    matches[0].name = nick;
    matches[1].type = 7;
    matches[1].name = nick;

    filter = ciFindFilter(chat, 2, matches);
    if (filter == 0)
        return;

    if (filter->type == 4)
    {
        char* user;
        char* name;
        char* address;
        WHOISData* data = (WHOISData*)filter->data;

        user = msg->params[2];
        name = msg->params[5];
        address = msg->params[3];

        data->user = goastrdup(user);
        if (data->user == 0)
            return;

        data->name = goastrdup(name);
        if (data->name == 0)
            return;

        data->address = goastrdup(address);
        if (data->address == 0)
            return;

        return;
    }

    if (filter->type == 7)
    {
        char* host;
        BANData* data = (BANData*)filter->data;

        if (data == 0)
            BF2_ASSERT("data != ((void *)0)", 0xf1d);
        if (data->channel == 0)
            BF2_ASSERT("data->channel != ((void *)0)", 0xf1e);
        if (data->channel[0] == 0)
            BF2_ASSERT("data->channel[0] != '\\0'", 0xf1e);

        host = msg->params[3];

        ciSocketSendf(&connection->chatSocket, "MODE %s +b *!*@%s", data->channel, host);

        ciFinishFilter(chat, filter, 0);
    }
}

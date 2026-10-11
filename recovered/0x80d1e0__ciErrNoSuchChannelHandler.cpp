// FUNCTION: BF2 0x80d1e0
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciFilterMatch { int type; int pad; char* name; char* name2; };
struct ciServerMessageFilter { int type; char pad[0x14]; void* callback; char pad2[0x10]; void* data; char pad3[8]; ciServerMessageFilter* pnext; };
struct ciConnection { char pad[0x878]; ciServerMessageFilter* filterList; };
struct GETKEYData { int num; char** keys; char* channel; };
struct ciCallbackEnterChannelParams { int success; int result; char* channel; };
struct ciCallbackGetChannelModeParams { int success; int pad; char* channel; void* mode; };
struct ciCallbackGetGlobalKeysParams { int success; int pad0; char* user; int num; int pad1; char** keys; char** values; };

extern "C" void* memset(void* s, int c, unsigned long n);
extern "C" int strcasecmp(const char* a, const char* b, ...);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" ciServerMessageFilter* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, ciServerMessageFilter* filter, void* params);

static ciServerMessageFilter* bf2_ciFindGetKeyFilter(CHAT chat, const char* channel)
{
    ciConnection* connection = (ciConnection*)chat;
    GETKEYData* data;
    ciServerMessageFilter* filter;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x17f, "ciFindGetKeyFilter");
    if (channel == 0)
        __assert_fail("channel", "External/GameSpy/chat/chatHandlers.c", 0x181, "ciFindGetKeyFilter");
    if (channel[0] == 0)
        __assert_fail("channel[0]", "External/GameSpy/chat/chatHandlers.c", 0x182, "ciFindGetKeyFilter");

    for (filter = connection->filterList; filter != 0; filter = filter->pnext)
    {
        if (filter->type == 0xc)
        {
            data = (GETKEYData*)filter->data;
            if (strcasecmp(data->channel, channel) == 0)
                return filter;
        }
    }

    return 0;
}

void ciErrNoSuchChannelHandler(CHAT chat, void* message)
{
    ciFilterMatch matches[2];
    ciServerMessageFilter* filter;
    char* channel;
    ciServerMessage* msg = (ciServerMessage*)message;

    if (msg->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0x1090, "ciErrNoSuchChannelHandler");

    channel = msg->params[1];

    memset(&matches, 0, sizeof(ciFilterMatch));
    matches[0].type = 1;
    matches[0].name = channel;
    matches[1].type = 5;
    matches[1].name = channel;

    filter = ciFindFilter(chat, 2, matches);
    if (filter != 0)
    {
        if (filter->type == 1)
        {
            ciCallbackEnterChannelParams params;
            params.success = 0;
            params.result = 1;
            params.channel = channel;

            ciFinishFilter(chat, filter, &params);
            return;
        }

        if (filter->type == 5)
        {
            ciCallbackGetChannelModeParams params;
            params.success = 0;
            params.channel = channel;
            params.mode = 0;

            ciFinishFilter(chat, filter, &params);
            return;
        }
    }

    filter = bf2_ciFindGetKeyFilter(chat, channel);
    if (filter != 0)
    {
        ciCallbackGetGlobalKeysParams params;
        params.success = 0;
        params.user = 0;
        params.num = 0;
        params.keys = 0;
        params.values = 0;

        ciFinishFilter(chat, filter, &params);
        return;
    }
}

// FUNCTION: BF2 0x80b290
typedef void* CHAT;
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciFilterMatch { int type; const char* name; const char* name2; };
struct ciServerMessage { char pad[0x40]; char** params; int numParams; };
struct chatChannelCallbacks { char pad0[0x28]; void* topicChanged; char pad1[0x28]; void* param; };
struct ciCallbackGetChannelTopicParams { int success; char* channel; char* topic; };
struct ciCallbackTopicChangedParams { char* channel; char* topic; };

extern "C" void* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, void* filter, void* params);
extern "C" chatChannelCallbacks* ciGetChannelCallbacks(CHAT chat, const char* channel);
extern "C" void ciSetChannelTopic(CHAT chat, const char* channel, const char* topic);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

void ciRplTopicHandler(CHAT chat, const ciServerMessage* message)
{
    ciFilterMatch match;
    void* filter;
    char* topic;
    char* channel;

    if (message->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 0xa05, "ciRplTopicHandler");

    channel = message->params[1];
    topic = message->params[2];

    ciSetChannelTopic(chat, channel, topic);

    memset(&match, 0, sizeof(ciFilterMatch));
    match.type = 2;
    match.name = channel;

    filter = ciFindFilter(chat, 1, &match);
    if (filter != 0)
    {
        ciCallbackGetChannelTopicParams params;
        params.success = 1;
        params.channel = channel;
        params.topic = topic;

        ciFinishFilter(chat, filter, &params);
    }
    else
    {
        chatChannelCallbacks* callbacks;
        callbacks = ciGetChannelCallbacks(chat, channel);
        if ((callbacks != 0) && (callbacks->topicChanged != 0))
        {
            ciCallbackTopicChangedParams params;
            params.channel = channel;
            params.topic = topic;
            ciAddCallback_(chat, 9, callbacks->topicChanged, &params, callbacks->param, 0, channel, sizeof(params));
        }
    }
}

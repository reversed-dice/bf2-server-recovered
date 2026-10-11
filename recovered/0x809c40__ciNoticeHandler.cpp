// FUNCTION: BF2 0x809c40
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciConnection {
    char pad[0x3b0];
    char nick[0x40];
    char pad2[0x850 - 0x3f0];
    void* privateMessage;
    char pad3[8];
    void* param;
};
struct chatChannelCallbacks { void* channelMessage; char pad[0x50]; void* param; };
struct ciCallbackPrivateMessageParams { char* user; char* message; int type; };
struct ciCallbackChannelMessageParams { char* channel; char* user; char* message; int type; };
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" int strcasecmp(...);
extern "C" chatChannelCallbacks* ciGetChannelCallbacks(CHAT chat, const char* channel);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

void ciNoticeHandler(CHAT chat, void* message)
{
    ciConnection* connection = (ciConnection*)chat;
    ciServerMessage* msg = (ciServerMessage*)message;
    char* target;
    char* text;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x5ea, "ciNoticeHandler");
    if (msg->numParams != 2)
        __assert_fail("message->numParams == 2", "External/GameSpy/chat/chatHandlers.c", 0x5f0, "ciNoticeHandler");

    target = msg->params[0];
    text = msg->params[1];

    if (strcasecmp(target, connection->nick) == 0)
    {
        if (connection->privateMessage != 0)
        {
            ciCallbackPrivateMessageParams params;
            if (msg->nick != 0)
                params.user = msg->nick;
            else
                params.user = 0;
            params.message = text;
            params.type = 2;
            ciAddCallback_(chat, 2, connection->privateMessage, &params, connection->param, 0, 0, sizeof(params));
        }
    }
    else
    {
        chatChannelCallbacks* callbacks = ciGetChannelCallbacks(chat, target);
        if (callbacks != 0)
        {
            void* cb = callbacks->channelMessage;
            if (cb != 0)
            {
                ciCallbackChannelMessageParams params;
                params.channel = target;
                if (msg->nick != 0)
                    params.user = msg->nick;
                else
                    params.user = 0;
                params.message = text;
                params.type = 2;
                ciAddCallback_(chat, 4, cb, &params, callbacks->param, 0, target, sizeof(params));
            }
        }
    }
}

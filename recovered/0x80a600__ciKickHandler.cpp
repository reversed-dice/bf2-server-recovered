// FUNCTION: BF2 0x80a600
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciConnection { char pad[0x3b0]; char nick[0x40]; };
struct chatChannelCallbacks { char pad0[8]; void* kicked; char pad1[8]; void* userParted; char pad2[0x20]; void* userListUpdated; char pad3[0x10]; void* param; };
struct ciCallbackKickedParams { char* channel; char* user; char* reason; };
struct ciCallbackUserPartedParams { char* channel; char* user; int why; int pad; char* reason; char* kicker; };
struct ciCallbackUserListUpdatedParams { char* channel; };

extern "C" int strcasecmp(const char* a, const char* b, ...);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void ciUserLeftChannel(CHAT chat, const char* user, const char* channel);
extern "C" chatChannelCallbacks* ciGetChannelCallbacks(CHAT chat, const char* channel);
extern "C" void ciChannelLeft(CHAT chat, const char* channel);
extern "C" int ciWasJoinCallbackCalled(CHAT chat, const char* channel);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

void ciKickHandler(CHAT chat, void* message)
{
    char* channel;
    char* kicker;
    char* kickee;
    char* reason;
    chatChannelCallbacks* callbacks;
    ciConnection* connection = (ciConnection*)chat;
    ciServerMessage* msg = (ciServerMessage*)message;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x794, "ciKickHandler");
    if ((msg->numParams != 2) && (msg->numParams != 3))
        __assert_fail("(message->numParams == 2) || (message->numParams == 3)", "External/GameSpy/chat/chatHandlers.c", 0x79a, "ciKickHandler");

    channel = msg->params[0];
    kicker = msg->nick;
    kickee = msg->params[1];
    if (msg->numParams == 3)
        reason = msg->params[2];
    else
        reason = "";

    ciUserLeftChannel(chat, kickee, channel);

    callbacks = ciGetChannelCallbacks(chat, channel);
    if (callbacks != 0)
    {
        if (strcasecmp(kickee, connection->nick) == 0)
        {
            if (callbacks->kicked != 0)
            {
                ciCallbackKickedParams params;
                params.channel = channel;
                params.user = kicker;
                params.reason = reason;
                ciAddCallback_(chat, 5, callbacks->kicked, &params, callbacks->param, 0, 0, sizeof(params));
            }

            ciChannelLeft(chat, channel);
        }
        else
        {
            if (ciWasJoinCallbackCalled(chat, channel))
            {
                if (callbacks->userParted != 0)
                {
                    ciCallbackUserPartedParams params;
                    params.channel = channel;
                    params.user = kickee;
                    params.why = 2;
                    params.reason = reason;
                    params.kicker = kicker;
                    ciAddCallback_(chat, 7, callbacks->userParted, &params, callbacks->param, 0, channel, sizeof(params));
                }

                if (callbacks->userListUpdated != 0)
                {
                    ciCallbackUserListUpdatedParams params;
                    params.channel = channel;
                    ciAddCallback_(chat, 0xc, callbacks->userListUpdated, &params, callbacks->param, 0, channel, sizeof(params));
                }
            }
        }
    }
}

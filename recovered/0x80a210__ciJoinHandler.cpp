// FUNCTION: BF2 0x80a210
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char* user; char* host; char pad2[0x18]; char** params; int numParams; };
struct ciFilterMatch { int type; int pad; char* name; char* name2; };
struct ciServerMessageFilter { int type; int pad0; char* name; char* name2; void* callback; char pad1[8]; void* param; void* data; int ID; };
struct ciConnection { char pad[0x30]; void* chatSocket; char pad2[0x378]; char nick[0x40]; };
struct chatChannelCallbacks { char pad0[0x10]; void* userJoined; char pad1[0x28]; void* userListUpdated; char pad2[0x10]; void* param; };
struct JOINData { char callbacks[0x60]; int joined; char password[0x24]; };
struct ciCallbackUserJoinedParams { char* channel; char* user; int mode; };
struct ciCallbackUserListUpdatedParams { char* channel; };

extern "C" int strcmp(const char* a, const char* b);
extern "C" void* memset(void* s, int c, unsigned long n);
extern "C" int ciSocketSendf(void* sock, const char* fmt, ...);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" int ciIsEnteringChannel(CHAT chat, const char* channel);
extern "C" int ciInChannel(CHAT chat, const char* channel);
extern "C" int ciWasJoinCallbackCalled(CHAT chat, const char* channel);
extern "C" ciServerMessageFilter* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" chatChannelCallbacks* ciGetChannelCallbacks(CHAT chat, const char* channel);
extern "C" void ciChannelEntered(CHAT chat, const char* channel, void* callbacks);
extern "C" void ciSetChannelPassword(CHAT chat, const char* channel, const char* password);
extern "C" void ciUserEnteredChannel(CHAT chat, const char* nick, const char* channel, int mode, const char* user, const char* address);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

void ciJoinHandler(CHAT chat, void* message)
{
    char* channel;
    char* nick;
    char* user;
    char* address;
    int mode;
    chatChannelCallbacks* callbacks;
    ciConnection* connection = (ciConnection*)chat;
    ciServerMessage* msg = (ciServerMessage*)message;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x6d6, "ciJoinHandler");
    if (msg->numParams != 1)
        __assert_fail("message->numParams == 1", "External/GameSpy/chat/chatHandlers.c", 0x6dc, "ciJoinHandler");

    channel = msg->params[0];
    nick = msg->nick;
    user = msg->user;
    address = msg->host;

    if (*nick == '@')
    {
        mode = 2;
        nick++;
        if (*nick == '\0')
            __assert_fail("*nick != '\\0'", "External/GameSpy/chat/chatHandlers.c", 0x6eb, "ciJoinHandler");
    }
    else if (*nick == '+')
    {
        mode = 1;
        nick++;
        if (*nick == '\0')
            __assert_fail("*nick != '\\0'", "External/GameSpy/chat/chatHandlers.c", 0x6f1, "ciJoinHandler");
    }
    else
    {
        mode = 0;
    }

    if (strcmp(nick, connection->nick) == 0)
    {
        ciServerMessageFilter* filter;
        ciFilterMatch match;

        if (!ciIsEnteringChannel(chat, channel))
            return;

        memset(&match, 0, sizeof(ciFilterMatch));
        match.type = 1;
        match.name = channel;

        filter = ciFindFilter(chat, 1, &match);
        if (filter != 0)
        {
            JOINData* data = (JOINData*)filter->data;

            ciChannelEntered(chat, channel, &data->callbacks);

            ciSetChannelPassword(chat, channel, data->password);

            data->joined = 1;

            ciSocketSendf(&connection->chatSocket, "MODE %s", channel);
        }

        return;
    }

    if (ciInChannel(chat, channel))
        ciUserEnteredChannel(chat, nick, channel, mode, user, address);

    if (ciWasJoinCallbackCalled(chat, channel))
    {
        callbacks = ciGetChannelCallbacks(chat, channel);
        if (callbacks != 0)
        {
            if (callbacks->userJoined != 0)
            {
                ciCallbackUserJoinedParams params;
                params.channel = channel;
                params.user = nick;
                params.mode = mode;
                ciAddCallback_(chat, 6, callbacks->userJoined, &params, callbacks->param, 0, channel, sizeof(params));
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

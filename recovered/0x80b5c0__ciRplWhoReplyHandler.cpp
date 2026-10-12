// FUNCTION: BF2 0x80b5c0
typedef void* CHAT;
struct ciServerMessage { char pad[0x10]; char* nick; char pad2[0x28]; char** params; int numParams; };
struct ciFilterMatch { int type; int pad; char* name; char* name2; };
struct ciServerMessageFilter { int type; int pad0; char* name; char* name2; void* callback; char pad1[8]; void* param; void* data; int ID; };
struct ciCallbackGetUserModeParams { int success; int pad; char* channel; char* nick; int mode; int pad2; };
struct ciCallbackGetBasicUserInfoParams { int success; int pad; char* nick; char* user; char* address; };
struct ciCallbackGetChannelBasicUserInfoParams { int success; int pad; char* channel; char* nick; char* user; char* address; };

extern "C" char* strchr(const char* s, int c);
extern "C" void* memset(void* s, int c, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));
extern "C" void ciSetUserBasicInfo(CHAT chat, const char* nick, const char* user, const char* address);
extern "C" ciServerMessageFilter* ciFindFilter(CHAT chat, int numMatches, ciFilterMatch* matches);
extern "C" void ciFinishFilter(CHAT chat, ciServerMessageFilter* filter, void* params);
extern "C" void ciAddCallback_(CHAT chat, int type, void* callback, void* params, void* instance, int zero, const char* target, unsigned long size);

void ciRplWhoReplyHandler(CHAT chat, void* message)
{
    char* channel;
    char* nick;
    char* user;
    char* address;
    ciServerMessageFilter* filter;
    ciFilterMatch matches[3];
    ciServerMessage* m = (ciServerMessage*)message;

    if (m->numParams != 8)
        __assert_fail("message->numParams == 8", "External/GameSpy/chat/chatHandlers.c", 0xaa6, "ciRplWhoReplyHandler");

    channel = m->params[1];
    user = m->params[2];
    address = m->params[3];
    nick = m->params[5];

    ciSetUserBasicInfo(chat, nick, user, address);

    memset(matches, 0, sizeof(matches));
    matches[0].type = 6;
    matches[0].name = nick;
    matches[0].name2 = channel;
    matches[1].type = 0xa;
    matches[1].name = nick;
    matches[2].type = 0xb;
    matches[2].name = channel;

    filter = ciFindFilter(chat, 3, matches);
    if (filter == 0)
        return;

    if (filter->type == 6)
    {
        ciCallbackGetUserModeParams params;
        int mode;

        mode = 0;
        if (strchr(m->params[6], '@'))
            mode |= 2;
        if (strchr(m->params[6], '+'))
            mode |= 1;

        params.success = 1;
        params.channel = channel;
        params.nick = nick;
        params.mode = mode;

        ciFinishFilter(chat, filter, &params);
        return;
    }

    if (filter->type == 0xa)
    {
        ciCallbackGetBasicUserInfoParams params;
        void* cb = filter->callback;
        void* prm = filter->param;
        int id = filter->ID;

        params.success = 1;
        params.nick = nick;
        params.user = user;
        params.address = address;

        ciAddCallback_(chat, 0x15, filter->callback, &params, prm, id, 0, sizeof(params));

        filter->callback = 0;
        return;
    }

    if ((filter->type == 0xb) && filter->callback)
    {
        ciCallbackGetChannelBasicUserInfoParams params;
        void* cb = filter->callback;
        void* prm = filter->param;
        int id = filter->ID;

        params.success = 1;
        params.channel = filter->name;
        params.nick = nick;
        params.user = user;
        params.address = address;

        ciAddCallback_(chat, 0x16, cb, &params, prm, id, 0, sizeof(params));
        return;
    }
}

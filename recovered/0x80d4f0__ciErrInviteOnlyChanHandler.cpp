// FUNCTION: BF2 0x80d4f0
extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
void* ciFindFilter(void*, int, void*);
void ciFinishFilter(void*, void*, void*);
}

struct Msg {
    char pad[0x40];
    void** params;
    int numParams;
};

struct Filt {
    int type;
    void* param;
    int count;
};

struct Resp {
    int a;
    int b;
    void* c;
};

void ciErrInviteOnlyChanHandler(void* conn, Msg* msg) {
    if (msg->numParams != 3)
        __assert_fail("message->numParams == 3", "External/GameSpy/chat/chatHandlers.c", 4388, __PRETTY_FUNCTION__);
    void* arg = msg->params[1];
    Filt f = {0};
    f.type = 1;
    f.param = arg;
    void* h = ciFindFilter(conn, 1, &f);
    if (h == 0)
        return;
    Resp r;
    r.a = 0;
    r.b = 3;
    r.c = arg;
    ciFinishFilter(conn, h, &r);
}

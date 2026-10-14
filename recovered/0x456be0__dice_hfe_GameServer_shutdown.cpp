// FUNCTION: BF2 0x456be0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void abort() __attribute__((noreturn));

extern void* g_010aebe8;
extern void* g_010b3730;
extern void* g_010b8c00;
extern void* g_01091b20;

void fn_0x00415690(void*);
void fn_0x0040f760(void*);
void fn_0x004cb860();
void* fn_0x004fe7c0();
bool fn_0x004fe880(void*);
void fn_0x00502740(void*);
void fn_0x007c76a0(void*);
void fn_0x0079ea90(void*);
void fn_0x004085b8(void*);
void fn_0x0046d030(void*);
void fn_0x00617110(void*);

typedef void (*FnV1)(void*);
typedef void (*FnV2)(void*, int, void*);
typedef int (*FnI1)(void*);

struct GameServerShutdown {
    char _pad0[0x88];
    char m_listener[8];
    char _pad1[0x20];
    void* m_owned;
    char _pad2[0x88];
    void* m_stream;
    char _pad3[0x38];
    void* m_ms;
    void* m_owned2;
    char _pad4[0x50];
    bool m_shutdown;
};

void dice_hfe_GameServer_shutdown(void* self)
{
    GameServerShutdown* t = (GameServerShutdown*)self;

    if (t->m_shutdown)
        return;

    ((FnV1)(*(void***)self)[10])(self);
    fn_0x00415690(self);
    fn_0x0040f760(self);
    fn_0x004cb860();
    if (fn_0x004fe880(fn_0x004fe7c0()))
        fn_0x00502740(fn_0x004fe7c0());
    fn_0x007c76a0(g_010aebe8);

    void* p = t->m_stream;
    if (p != 0) {
        fn_0x0079ea90(p);
        fn_0x004085b8(p);
        t->m_stream = 0;
    }

    if (t->m_owned != 0) {
        ((FnV1)(*(void***)t->m_owned)[5])(t->m_owned);
        if (t->m_owned != 0)
            ((FnV1)(*(void***)t->m_owned)[37])(t->m_owned);
        t->m_owned = 0;
    }

    void* q = t->m_ms;
    if (q != 0) {
        fn_0x0046d030(q);
        fn_0x004085b8(q);
    }

    void* r = g_01091b20;
    if (r != 0) {
        fn_0x00617110(r);
        fn_0x004085b8(r);
    }

    void* sq = g_010b8c00;
    if (sq != 0) {
        if (((FnI1)(*(void***)sq)[2])(sq) != 0)
            abort();
        g_010b8c00 = 0;
    }

    if (t->m_owned2 != 0)
        ((FnV1)(*(void***)t->m_owned2)[2])(t->m_owned2);

    t->m_shutdown = true;

    void* l = (void*)&t->m_listener;
    ((FnV2)(*(void***)g_010b3730)[12])(g_010b3730, 0, l);
    ((FnV2)(*(void***)g_010b3730)[12])(g_010b3730, 6, l);
    ((FnV2)(*(void***)g_010b3730)[12])(g_010b3730, 5, l);
    ((FnV2)(*(void***)g_010b3730)[12])(g_010b3730, 2, l);
}

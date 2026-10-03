// FUNCTION: BF2 0x453e70
namespace dice { namespace hfe {
extern void* fn_4536f0(void);
extern void fn_43d1b0(void* a);
void clientSendDatabase_0x453e70(void* self, int a) {
    void* p = fn_4536f0();
    fn_43d1b0(p);
    void* s = *(void**)0x010b8c00;
    ((void (*)(void*, int))(*(void***)s)[0x6])(s, a);
    *(int*)((char*)p + 0x18) = 3;
    *(char*)((char*)p + 0x1c) = 1;
    void* q = ((void* (*)(void*))(*(void***)p)[0x6])(p);
    if (!q)
        return;
    void* r = ((void* (*)(void*))(*(void***)p)[0x6])(p);
    ((void (*)(void*, int))(*(void***)r)[0x1f])(r, 1);
}
} }

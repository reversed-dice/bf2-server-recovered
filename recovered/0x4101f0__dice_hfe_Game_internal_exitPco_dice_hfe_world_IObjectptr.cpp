// FUNCTION: BF2 0x4101f0
extern "C" int IID_ISoldier;
extern "C" int IID_IPlayerControlObject;

void fn_0x4101f0(void* self, void* obj)
{
    (void)self;
    void* r2 = 0;
    if (!obj) return;
    void* r = ((void*(*)(void*,int))(*(void***)obj)[0x18/8])(obj, IID_ISoldier);
    if (r) {
        void* it = ((void*(*)(void*))(*(void***)r)[0x58/8])(r);
        while (it) {
            r2 = ((void*(*)(void*,int))(*(void***)it)[0x18/8])(it, IID_IPlayerControlObject);
            if (r2) break;
            it = *(void**)((char*)it + 0x50);
        }
    }
    if (!r2) {
        for (;;) {
            r2 = ((void*(*)(void*,int))(*(void***)obj)[0x18/8])(obj, IID_IPlayerControlObject);
            if (r2) break;
            obj = *(void**)((char*)obj + 0x50);
            if (!obj) return;
        }
    }
    void* x = ((void*(*)(void*))(*(void***)r2)[0x28/8])(r2);
    while (x) {
        void* r3 = ((void*(*)(void*,int))(*(void***)x)[0x18/8])(x, IID_IPlayerControlObject);
        if (r3) {
            ((void(*)(void*))(*(void***)r3)[0x58/8])(r3);
            break;
        }
        x = *(void**)((char*)x + 0x50);
    }
    ((void(*)(void*))(*(void***)r2)[0x40/8])(r2);
}

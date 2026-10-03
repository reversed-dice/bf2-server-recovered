// FUNCTION: BF2 0x5169c0
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void* self);
extern "C" void _ZdlPv(void* p);

void dtor_5169c0(void* self) {
    *(void**)self = (void*)0xb410d0;
    *(void**)((char*)self + 0x100) = (void*)0xb413e0;
    void* sub = *(void**)((char*)self + 0x70);
    if (sub != 0) {
        void* r = ((void* (*)(void*))(*(void***)sub)[0x34])(sub);
        if (r != 0) {
            void* r2 = ((void* (*)(void*))(*(void***)*(void**)((char*)self + 0x70))[0x34])(*(void**)((char*)self + 0x70));
            ((void (*)(void*))(*(void***)r2)[0x2])(r2);
            ((void (*)(void*, int))(*(void***)*(void**)((char*)self + 0x70))[0x33])(*(void**)((char*)self + 0x70), 0);
        }
    }
    dice_hfe_world_Bundle_dtor_Bundle(self);
    _ZdlPv(self);
}

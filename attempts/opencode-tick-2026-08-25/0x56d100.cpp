typedef char (*C0)(void*, int);
typedef void* (*P0)(void*, int);
typedef void* (*P1)(void*);
extern "C" void dice_hfe_world_Zipline_recalcBounds(void* self) {
    void* p = *(void**)((char*)self + 0x80);
    if (p != 0) {
        C0 f58 = ((C0)(*(void***)p)[0x58 / 8]);
        if (f58(p, 0)) {
            P0 fb0 = ((P0)(*(void***)p)[0xb0 / 8]);
            void* v = fb0(p, 0);
            if (v != 0) {
                P1 fd8 = ((P1)(*(void***)self)[0xd8 / 8]);
                *(float*)((char*)self + 0x260) = *(float*)((char*)v + 0x10) - *(float*)((char*)v + 0x4);
                void* o = fd8(self);
                *(float*)((char*)self + 0x268) = *(float*)((char*)v + 0x10) + *(float*)((char*)o + 0x4);
                void* o2 = fd8(self);
                *(float*)((char*)self + 0x26c) = *(float*)((char*)v + 0x4) + *(float*)((char*)o2 + 0x4);
            }
        }
    }
    *(char*)((char*)self + 0x25c) = 0;
}

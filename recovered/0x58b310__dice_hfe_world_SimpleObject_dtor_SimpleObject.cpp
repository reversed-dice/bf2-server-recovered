// FUNCTION: BF2 0x58b310
extern "C" void _ZdlPv(void* p);
extern "C" long dice_hfe_world_Object_queryComponent_unsigned_int_unsigned_int(void* self, unsigned int a, unsigned int b);
extern "C" void dice_hfe_world_Object_dtor_Object(void* self);

void dtor_58b310(void* self) {
    *(void**)self = (void*)0xb5c090;
    *(void**)((char*)self + 0x100) = (void*)0xb5c3a0;
    void* f = *(void**)((char*)self + 0x28);
    _ZdlPv(*(void**)((char*)self + 0x218));
    void* p220 = *(void**)((char*)self + 0x220);
    if (p220 != 0) {
        ((void (*)(void*))(*(void***)p220)[0xb])(p220);
        *(void**)((char*)self + 0x220) = 0;
    }
    if (*(void**)((char*)self + 0x68) != 0) {
        if (__builtin_expect(dice_hfe_world_Object_queryComponent_unsigned_int_unsigned_int(self, *(unsigned*)0xc7d6a0, *(unsigned*)0xc7d6a0) != 0, 1)) {
            void* pm = *(void**)0x1133c00;
            ((void (*)(void*, void*))(*(void***)pm)[0x7])(pm, self);
        }
        if (__builtin_expect(dice_hfe_world_Object_queryComponent_unsigned_int_unsigned_int(self, *(unsigned*)0xc7d69c, *(unsigned*)0xc7d69c) != 0, 1)) {
            void* pm = *(void**)0x1133c00;
            ((void (*)(void*, void*))(*(void***)pm)[0x9])(pm, self);
        }
    }
    ((void (*)(void*, void*))(*(void***)f)[0x23])(f, self);
    ((void (*)(void*, void*))(*(void***)f)[0x21])(f, self);
    dice_hfe_world_Object_dtor_Object(self);
    _ZdlPv(self);
}

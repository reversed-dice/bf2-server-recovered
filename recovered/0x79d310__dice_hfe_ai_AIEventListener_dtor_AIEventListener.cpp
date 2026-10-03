// FUNCTION: BF2 0x79d310
extern "C" void _ZdlPv(void* p);

void dtor_79d310(void* self) {
    *(void**)self = (void*)0xba80b0;
    for (long i = 0; i != 0x18; i++) {
        ((void (*)(void*, int, int))(*(void***)*(void**)0x10b3730)[0xe])(*(void**)0x10b3730, 3, (int)i);
    }
    ((void (*)(void*, int, void*))(*(void***)*(void**)0x10b3730)[0xc])(*(void**)0x10b3730, 2, self);
    ((void (*)(void*, int, void*))(*(void***)*(void**)0x10b3730)[0xc])(*(void**)0x10b3730, 3, self);
    ((void (*)(void*, int, void*))(*(void***)*(void**)0x10b3730)[0xc])(*(void**)0x10b3730, 1, self);
    ((void (*)(void*, int, void*))(*(void***)*(void**)0x10b3730)[0xc])(*(void**)0x10b3730, 0, self);
    ((void (*)(void*, int, void*))(*(void***)*(void**)0x10b3730)[0xc])(*(void**)0x10b3730, 5, self);
    _ZdlPv(self);
}

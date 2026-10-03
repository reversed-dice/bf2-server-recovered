// FUNCTION: BF2 0x7db9f0
extern "C" void dice_hfe_io_BufferedStream_flushWrite(void* self);
extern "C" void dice_hfe_io_BufferedStream_Buffer_dtor_Buffer(void* b);
extern "C" void _ZdlPv(void* p);

void dtor_7db9f0(void* self) {
    *(void**)self = (void*)0xbabcb0;
    *(void**)((char*)self + 8) = (void*)0xbabd88;
    *(void**)((char*)self + 0x10) = (void*)0xbabe10;
    dice_hfe_io_BufferedStream_flushWrite(self);
    dice_hfe_io_BufferedStream_Buffer_dtor_Buffer((char*)self + 0x50);
    dice_hfe_io_BufferedStream_Buffer_dtor_Buffer((char*)self + 0x38);
    void* p1 = *(void**)((char*)self + 0x30);
    if (p1 != 0) {
        ((void (*)(void*))(*(void***)p1)[0x2])(p1);
    }
    void* p2 = *(void**)((char*)self + 0x28);
    if (p2 != 0) {
        ((void (*)(void*))(*(void***)p2)[0x2])(p2);
    }
    void* p3 = *(void**)((char*)self + 0x20);
    if (p3 != 0) {
        ((void (*)(void*))(*(void***)p3)[0x2])(p3);
    }
    _ZdlPv(self);
}

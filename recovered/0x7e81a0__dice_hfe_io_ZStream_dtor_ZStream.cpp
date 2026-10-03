// FUNCTION: BF2 0x7e81a0
extern "C" void dice_hfe_io_ZWriter_close(void* w);
extern "C" void dice_hfe_io_ZWriter_dtor_ZWriter(void* w);
extern "C" void dice_hfe_io_ZReader_close(void* r);
extern "C" void dice_hfe_io_ZReader_dtor_ZReader(void* r);
extern "C" void _ZdlPv(void* p);

void dtor_7e81a0(void* self) {
    *(void* volatile*)self = (void*)0xbad3d0;
    void* w = *(void**)((char*)self + 0x20);
    if (w != 0) {
        dice_hfe_io_ZWriter_close(w);
        void* w2 = *(void**)((char*)self + 0x20);
        if (w2 != 0) {
            dice_hfe_io_ZWriter_dtor_ZWriter(w2);
            _ZdlPv(w2);
        }
    }
    void* r = *(void**)((char*)self + 0x18);
    if (r != 0) {
        dice_hfe_io_ZReader_close(r);
        void* r2 = *(void**)((char*)self + 0x18);
        if (r2 != 0) {
            dice_hfe_io_ZReader_dtor_ZReader(r2);
            _ZdlPv(r2);
        }
    }
    void* sub = *(void**)((char*)self + 0x10);
    ((void (*)(void*))(*(void***)sub)[0x2])(sub);
    _ZdlPv(self);
}

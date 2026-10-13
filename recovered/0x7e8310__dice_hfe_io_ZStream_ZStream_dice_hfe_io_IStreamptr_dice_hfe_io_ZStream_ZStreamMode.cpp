// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7e8310
extern "C" void _ZdlPv(void*);
extern "C" void* _Znwm(unsigned long);
extern "C" void dice_hfe_io_ZReader_ZReader(void* r);
extern "C" void dice_hfe_io_ZWriter_ZWriter(void* w);
extern "C" bool dice_hfe_io_ZReader_open_dice_hfe_io_IStreamptr(void* r, void* s);
extern "C" bool dice_hfe_io_ZWriter_open_dice_hfe_io_IStreamptr(void* w, void* s);
extern "C" void dice_hfe_io_ZReader_dtor_ZReader(void* r);
extern "C" void dice_hfe_io_ZWriter_dtor_ZWriter(void* w);

void dice_hfe_io_ZStream_ZStream(void* self, void* stream, int mode)
{
    *(void**)self = (void*)0xbad3d0;
    *(int*)((char*)self + 8) = 1;
    *(int*)((char*)self + 0xc) = mode;
    *(void**)((char*)self + 0x10) = stream;
    *(void**)((char*)self + 0x18) = 0;
    *(void**)((char*)self + 0x20) = 0;
    ((void (*)(void*))(*(void***)stream)[0])(stream);

    if (mode == 1)
    {
        void* r = _Znwm(0x28);
        dice_hfe_io_ZReader_ZReader(r);
        *(void**)((char*)self + 0x18) = r;
        if (r != 0)
        {
            if (!dice_hfe_io_ZReader_open_dice_hfe_io_IStreamptr(r, *(void**)((char*)self + 0x10)))
            {
                void* d = *(void**)((char*)self + 0x18);
                if (d != 0)
                {
                    dice_hfe_io_ZReader_dtor_ZReader(d);
                    _ZdlPv(d);
                }
                *(void**)((char*)self + 0x18) = 0;
            }
        }
    }
    else
    {
        void* w = _Znwm(0x20);
        dice_hfe_io_ZWriter_ZWriter(w);
        *(void**)((char*)self + 0x20) = w;
        if (w != 0)
        {
            if (!dice_hfe_io_ZWriter_open_dice_hfe_io_IStreamptr(w, *(void**)((char*)self + 0x10)))
            {
                void* d = *(void**)((char*)self + 0x20);
                if (d != 0)
                {
                    dice_hfe_io_ZWriter_dtor_ZWriter(d);
                    _ZdlPv(d);
                }
                *(void**)((char*)self + 0x20) = 0;
            }
        }
    }
}

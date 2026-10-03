// FUNCTION: BF2 0x4e2760
extern "C" void fn_407e08(void*, int, char*);
extern "C" void fn_4099a0(int);

namespace dice { namespace hfe { class BF2Log { public: BF2Log(); }; } }

dice::hfe::BF2Log::BF2Log()
{
    typedef unsigned char u8;

    *(void**)this = (void*)0xb3a0d0;
    *((u8*)this + 8) = 0;

    char sentinel_;

    *((u8*)this + 9) = 0;
    *((u8*)this + 0xa) = 1;
    *((u8*)this + 0xb) = 0;

    fn_407e08((u8*)this + 0x10, 0xbb25f1, &sentinel_);

    *(void**)((u8*)this + 0x18) = (void*)0xf6c6e8;
    *(void**)((u8*)this + 0x20) = (void*)0xf6c6e8;
    *(void**)((u8*)this + 0x28) = (void*)0xf6c6e8;
    *(void**)((u8*)this + 0x30) = 0;
    *(void**)((u8*)this + 0x38) = 0;

    fn_4099a0(0x4e5160);

    *((u8*)this + 0xa) = 0;
}

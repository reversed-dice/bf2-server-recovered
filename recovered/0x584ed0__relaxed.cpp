// FUNCTION: BF2 0x584ed0
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb5b030;
    *(void**)((char*)p + 0x10) = (void*)0xb5b2c0;
    *(void**)((char*)p + 0x68) = (void*)0xb5b2f8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb5b378;
    dot_base(p);
}

}}}

// FUNCTION: BF2 0x56ab50
// DestroyableObjectTemplate dtor 0x5155b0 — 4 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dot_base(void* p);

void dot_dtor(void* p) {
    *(void**)p = (void*)0xb542f0;
    *(void**)((char*)p + 0x10) = (void*)0xb54580;
    *(void**)((char*)p + 0x68) = (void*)0xb545b8;
    *(void**)((char*)p + 0x1c8) = (void*)0xb54638;
    dot_base(p);
}

}}}

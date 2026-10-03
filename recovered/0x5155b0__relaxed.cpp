// FUNCTION: BF2 0x5155b0
// LadderContainer dtor 0x5290a0 — 4 vptr + tail-call base
namespace dice { namespace hfe { namespace world {

extern void lc_base(void* p);

void lc_dtor(void* p) {
    *(void**)p = (void*)0xb40490;
    *(void**)((char*)p + 0x10) = (void*)0xb40720;
    *(void**)((char*)p + 0x68) = (void*)0xb40758;
    *(void**)((char*)p + 0x1c8) = (void*)0xb407d8;
    lc_base(p);
}

}}}

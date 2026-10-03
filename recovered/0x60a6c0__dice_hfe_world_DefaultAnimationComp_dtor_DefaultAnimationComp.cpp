// FUNCTION: BF2 0x60a6c0
// DefaultAnimationComp dtor 0x60a6a0 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void dac_base(void* p);

void dac_dtor(void* p) {
    *(void**)p = (void*)0xb786d0;
    *(void**)((char*)p + 0x20) = (void*)0xb78848;
    dac_base(p);
}

}}}

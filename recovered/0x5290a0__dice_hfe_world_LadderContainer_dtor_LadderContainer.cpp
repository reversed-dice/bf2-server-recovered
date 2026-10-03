// FUNCTION: BF2 0x5290a0
// LadderContainer dtor 0x5290a0 — 4 vptr + tail-call base
namespace dice { namespace hfe { namespace world {

extern void lc_base(void* p);

void lc_dtor(void* p) {
    *(void**)p = (void*)0xb45f50;
    *(void**)((char*)p + 0x100) = (void*)0xb46530;
    *(void**)((char*)p + 0x238) = (void*)0xb46568;
    *(void**)((char*)p + 0x240) = (void*)0xb46838;
    lc_base(p);
}

}}}

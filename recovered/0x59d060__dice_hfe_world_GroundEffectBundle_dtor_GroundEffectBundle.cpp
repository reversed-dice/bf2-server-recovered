// FUNCTION: BF2 0x59d060
// GroundEffectBundle dtor 0x59d060 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void geb_base3(void* p);

void geb_dtor(void* p) {
    *(void**)p = (void*)0xb60ed0;
    *(void**)((char*)p + 0x100) = (void*)0xb611e0;
    geb_base3(p);
}

}}}

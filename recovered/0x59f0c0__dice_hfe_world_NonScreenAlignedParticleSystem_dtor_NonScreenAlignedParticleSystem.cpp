// FUNCTION: BF2 0x59f0c0
// NonScreenAlignedParticleSystem dtor 0x59f0c0 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void nsap_base(void* p);

void nsap_dtor(void* p) {
    *(void**)p = (void*)0xb61db0;
    *(void**)((char*)p + 0x100) = (void*)0xb620c8;
    nsap_base(p);
}

}}}

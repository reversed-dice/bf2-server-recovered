// FUNCTION: BF2 0x59dd80
// MeshParticleSystem dtor 0x59dd80 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void mps_base(void* p);

void mps_dtor(void* p) {
    *(void**)p = (void*)0xb615b0;
    *(void**)((char*)p + 0x100) = (void*)0xb618c8;
    mps_base(p);
}

}}}

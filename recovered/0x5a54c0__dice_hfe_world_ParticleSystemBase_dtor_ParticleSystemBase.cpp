// FUNCTION: BF2 0x5a54c0
// ParticleSystemBase dtor 0x5a54c0 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void psb_base2(void* p);

void psb_dtor2(void* p) {
    *(void**)p = (void*)0xb62f10;
    *(void**)((char*)p + 0x100) = (void*)0xb63228;
    psb_base2(p);
}

}}}

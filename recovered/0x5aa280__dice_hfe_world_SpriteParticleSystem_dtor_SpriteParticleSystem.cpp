// FUNCTION: BF2 0x5aa280
// SpriteParticleSystem dtor 0x5aa280 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void sps_base(void* p);

void sps_dtor(void* p) {
    *(void**)p = (void*)0xb64c10;
    *(void**)((char*)p + 0x100) = (void*)0xb64f28;
    sps_base(p);
}

}}}

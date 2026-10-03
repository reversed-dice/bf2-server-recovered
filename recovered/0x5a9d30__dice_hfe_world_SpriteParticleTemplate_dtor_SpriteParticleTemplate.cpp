// FUNCTION: BF2 0x5a9d30
// SpriteParticleTemplate dtor 0x5a9d30 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void spt_base(void* p);

void spt_dtor(void* p) {
    *(void**)p = (void*)0xb64990;
    *(void**)((char*)p + 0x10) = (void*)0xb64b70;
    spt_base(p);
}

}}}

// FUNCTION: BF2 0x5a8220
// SpriteParticleSystemTemplateBase dtor 0x5a8220 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void spstb_base(void* p);

void spstb_dtor(void* p) {
    *(void**)p = (void*)0xb63d30;
    *(void**)((char*)p + 0x10) = (void*)0xb63f98;
    spstb_base(p);
}

}}}

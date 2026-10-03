// FUNCTION: BF2 0x5a8280
// SpriteParticleSystemTemplateBase ctor 0x5a8280 — base + 2 vptr
namespace dice { namespace hfe { namespace world {

extern void spstb_base_ctor(void* p);

void spstb_ctor(void* p) {
    spstb_base_ctor(p);
    *(void**)p = (void*)0xb63d30;
    *(void**)((char*)p + 0x10) = (void*)0xb63f98;
}

}}}

// re-trigger validate 2026-08-06 20:39:23

// re-trigger validate 2026-08-07 00:31:12

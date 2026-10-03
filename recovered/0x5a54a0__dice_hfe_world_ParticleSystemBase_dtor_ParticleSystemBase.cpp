// FUNCTION: BF2 0x5a54a0
// ParticleSystemBase dtor 0x5a54a0 — 2 vptr + tail-call base dtor
namespace dice { namespace hfe { namespace world {

extern void obj_dtor(void* p);

void psb_dtor(void* p) {
    *(void**)p = (void*)0xb62f10;
    *(void**)((char*)p + 0x100) = (void*)0xb63228;
    obj_dtor(p);
}

}}}

// re-trigger validate 2026-08-06 20:37:06

// re-trigger validate 2026-08-07 00:28:58

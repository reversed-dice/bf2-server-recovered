// FUNCTION: BF2 0x5a5420
// ParticleSystemBase ctor 0x5a5420 — base + vptr + champ + tail-call
namespace dice { namespace hfe { namespace world {

extern void psb_base_ctor(void* p);
extern void psb_init(void* p, unsigned int a, int b);

void psb_ctor(void* p) {
    psb_base_ctor(p);
    *(void**)p = (void*)0xb62f10;
    *(void**)((char*)p + 0x100) = (void*)0xb63228;
    *(void**)((char*)p + 0x218) = 0;
    psb_init(p, 0x1802, 0);
}

}}}

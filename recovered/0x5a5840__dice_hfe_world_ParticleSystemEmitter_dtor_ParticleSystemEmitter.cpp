// FUNCTION: BF2 0x5a5840
// ParticleSystemEmitter dtor 0x5a5840 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void pse_base(void* p);

void pse_dtor(void* p) {
    *(void**)p = (void*)0xb632d0;
    *(void**)((char*)p + 0x100) = (void*)0xb635e8;
    pse_base(p);
}

}}}

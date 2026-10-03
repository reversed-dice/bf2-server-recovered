// FUNCTION: BF2 0x5aa200
// SpriteParticle dtor 0x5aa200 — 2 vptr + tail-call
namespace dice { namespace hfe { namespace world {

extern void sp_base(void* p);

void sp_dtor(void* p) {
    *(void**)p = (void*)0xb64630;
    *(void**)((char*)p + 0x100) = (void*)0xb64940;
    sp_base(p);
}

}}}

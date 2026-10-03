// FUNCTION: BF2 0x7628d0
// EngineSoundTemplate ctor 0x7628d0 — 2 bytes + tail-call
namespace dice { namespace hfe {

extern void est_base(void* p);

void est_ctor(void* p) {
    *(unsigned char*)p = 0;
    *(unsigned char*)((char*)p + 1) = 0;
    est_base(p);
}

}}

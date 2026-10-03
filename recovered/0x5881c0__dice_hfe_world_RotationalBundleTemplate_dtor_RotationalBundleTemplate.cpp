// FUNCTION: BF2 0x5881c0
// RotationalBundleTemplate dtor 0x5881c0 — 4 vptr + tail-call base
namespace dice { namespace hfe { namespace world {

extern void rbt_base(void* p);

void rbt_dtor(void* p) {
    *(void**)p = (void*)0xb5b990;
    *(void**)((char*)p + 0x10) = (void*)0xb5bc20;
    *(void**)((char*)p + 0x68) = (void*)0xb5bc58;
    *(void**)((char*)p + 0x1c8) = (void*)0xb5bcd8;
    rbt_base(p);
}

}}}

// re-trigger validate 2026-08-06 20:38:18

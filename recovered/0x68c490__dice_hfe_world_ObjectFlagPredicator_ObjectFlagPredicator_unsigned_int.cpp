// FUNCTION: BF2 0x68c490
// ObjectFlagPredicator ctor 0x68c490 — fonction libre (évite C1/C2)
namespace dice { namespace hfe { namespace world {

void ofp_ctor(void* p, unsigned int flags) {
    *(void**)p = (void*)0xb8e0b0;
    *(unsigned int*)((char*)p + 8) = flags;
}

}}}

// re-trigger validate 2026-08-06 17:11:25

// re-trigger validate 2026-08-06 17:16:54

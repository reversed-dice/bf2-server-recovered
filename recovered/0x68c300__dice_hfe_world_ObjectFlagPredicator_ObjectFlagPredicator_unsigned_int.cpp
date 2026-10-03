// FUNCTION: BF2 0x68c300
// ObjectFlagPredicator 2e ctor 0x68c300 — vptr + flags
namespace dice { namespace hfe { namespace world {

void ofp2_ctor(void* p, unsigned int flags) {
    *(void**)p = (void*)0xb8e0b0;
    *(unsigned int*)((char*)p + 8) = flags;
}

}}}

// re-trigger validate 2026-08-06 20:37:13

// re-trigger validate 2026-08-07 00:29:05

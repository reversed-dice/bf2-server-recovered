// FUNCTION: BF2 0xad4220
// getActiveValueHolder 0xad4220 — deref global + champ 0x30
namespace dice { namespace hfe { namespace animationTools {

void* getActiveValueHolder() {
    void* p = *(void**)0x10a3140;
    if (p)
        return *(void**)((char*)p + 0x30);
    return 0;
}

}}}

// re-trigger validate 2026-08-06 20:39:01

// re-trigger validate 2026-08-07 00:30:48

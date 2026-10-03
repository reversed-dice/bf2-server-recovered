// FUNCTION: BF2 0x748be0
// compareIgnoreCase 0x748be0 — deref 2 + tail-call vers 0x748b80
namespace dice { namespace hfe {

extern int cmp_ic3(void* a, void* b);

int compareIgnoreCase3(void const* a, void const* b) {
    return cmp_ic3(*(void**)a, *(void**)b);
}

}}

// re-trigger validate 2026-08-06 20:40:12

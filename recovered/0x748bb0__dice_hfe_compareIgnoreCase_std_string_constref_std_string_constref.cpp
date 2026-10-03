// FUNCTION: BF2 0x748bb0
// compareIgnoreCase 0x748bb0 — tail-call avec 2 derefs (buffers std::string)
namespace dice { namespace hfe {

extern int cmp_ignore_case(void* a, void* b);

int compareIgnoreCase(void const* a, void const* b) {
    return cmp_ignore_case(*(void**)a, *(void**)b);
}

}}

// re-trigger validate 2026-08-06 17:11:17

// re-trigger validate 2026-08-06 17:16:47

// FUNCTION: BF2 0x4ee6a0
// Vars::set 0x4ee6a0 — deref 2 + tail-call
namespace dice { namespace hfe {

extern void vars_set(void* a, void* b);

void vars_set2(void const* a, void const* b) {
    vars_set(*(void**)a, *(void**)b);
}

}}

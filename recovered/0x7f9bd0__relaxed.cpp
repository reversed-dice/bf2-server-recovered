// FUNCTION: BF2 0x7f9bd0
// equalsIgnoreCase 0x748bc0 — wrapper sans deref (le deref est dans compareIgnoreCase)
namespace dice { namespace hfe {

extern int cmp_ic(void* a, void* b);

int equalsIgnoreCase(void const* a, void const* b) {
    return cmp_ic((void*)a, (void*)b) == 0;
}

}}

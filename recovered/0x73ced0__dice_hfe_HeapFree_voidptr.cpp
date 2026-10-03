// FUNCTION: BF2 0x73ced0
// HeapFree 0x73ced0 — test + tail-call free
namespace dice { namespace hfe {

extern void heap_free(void* p);

void HeapFree(void* p) {
    if (p != 0)
        heap_free(p);
}

}}

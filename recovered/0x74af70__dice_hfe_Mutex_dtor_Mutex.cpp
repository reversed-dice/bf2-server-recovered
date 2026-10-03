// FUNCTION: BF2 0x74af70
// Mutex dtor 0x74af70 — destroy + delete du mutex interne
namespace dice { namespace hfe {

extern void pm_destroy(void* m);
extern void op_delete(void* p);

void mutex_dtor(void* p) {
    void* m = *(void**)p;
    if (m) {
        pm_destroy(m);
        op_delete(m);
    }
}

}}

// re-trigger validate 2026-08-06 20:36:52

// re-trigger validate 2026-08-07 00:28:43

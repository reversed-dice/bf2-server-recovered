// FUNCTION: BF2 0x74af30
// Mutex ctor 0x74af30 — alloc(taille) + pm_init(m, 0) + store
namespace dice { namespace hfe {

extern void* alloc_size(int size);
extern void pm_init(void* m, int kind);

void mutex_ctor(void* p) {
    void* m = alloc_size(0x28);
    pm_init(m, 0);
    *(void**)p = m;
}

}}

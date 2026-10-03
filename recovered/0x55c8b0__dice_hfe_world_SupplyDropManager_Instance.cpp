// FUNCTION: BF2 0x55c8b0
namespace dice { namespace hfe {
extern void* g_0x0108eed8;
extern void* alloc_0x00407508(int n);
extern void ctor_0x0055c870(void* p);
void* GetInstance_55c8b0() {
    if (g_0x0108eed8)
        return g_0x0108eed8;
    void* g = alloc_0x00407508(0x40);
    ctor_0x0055c870(g);
    g_0x0108eed8 = g;
    return g;
}
} }

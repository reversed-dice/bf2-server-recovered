// FUNCTION: BF2 0x4ce080
namespace dice { namespace hfe {
extern void* g_0x0108d760;
extern void* alloc_0x00407508(int n);
extern void ctor_0x004ce030(void* p);
void* GetInstance_4ce080() {
    if (g_0x0108d760)
        return g_0x0108d760;
    void* g = alloc_0x00407508(0x40);
    ctor_0x004ce030(g);
    g_0x0108d760 = g;
    return g;
}
} }

// FUNCTION: BF2 0x846eb0
namespace dice { namespace hfe {
extern void* g_0x010b3210;
extern void* alloc_0x00407508(int n);
extern void ctor_0x00846ea0(void* p);
void* GetInstance_4ce080() {
    if (g_0x010b3210)
        return g_0x010b3210;
    void* g = alloc_0x00407508(0x8);
    ctor_0x00846ea0(g);
    g_0x010b3210 = g;
    return g;
}
} }

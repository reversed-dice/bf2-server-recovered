// FUNCTION: BF2 0x850820
namespace dice { namespace hfe {
extern void* g_0x010b4018;
extern void* alloc_0x00407508(int n);
extern void ctor_0x007d9bc0(void* p);
void* factory_850820() {
    void* g = alloc_0x00407508(0x8);
    ctor_0x007d9bc0(g);
    g_0x010b4018 = g;
    return g;
}
} }

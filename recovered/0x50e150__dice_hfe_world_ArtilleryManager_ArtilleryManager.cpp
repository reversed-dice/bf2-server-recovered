// FUNCTION: BF2 0x50e150
namespace dice { namespace hfe {
extern void* g_0x0108dda0;
void f_50e150(void* self) {
    *(void**)((char*)self + 0x0) = 0;
    *(void**)((char*)self + 0x8) = 0;
    void* g = g_0x0108dda0;
    if (!g)
        g = self;
    g_0x0108dda0 = g;
}
} }

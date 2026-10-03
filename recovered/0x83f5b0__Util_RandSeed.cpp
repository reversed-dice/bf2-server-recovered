// FUNCTION: BF2 0x83f5b0
namespace dice { namespace hfe {
extern void* g_0x00f6b408;
void f_83f5b0(void* self) {
    void* r = (void*)0x1;
    if (self)
        r = (void*)((long long)self & 0x7fffffff);
    g_0x00f6b408 = r;
}
} }

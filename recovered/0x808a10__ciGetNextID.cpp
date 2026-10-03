// FUNCTION: BF2 0x808a10
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct CGID { unsigned char _pad[0x888]; int m_888; };
int ciGetNextID_0x808a10(CGID* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb1b88, 0x32d, (void*)0xbb105f);
    int v = self->m_888;
    if (v == 0x7fffffff) {
        self->m_888 = 1;
    } else {
        self->m_888 = v + 1;
    }
    return v;
}
} }

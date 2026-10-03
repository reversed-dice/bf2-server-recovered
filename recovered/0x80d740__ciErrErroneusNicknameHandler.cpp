// FUNCTION: BF2 0x80d740
namespace dice { namespace hfe {
extern void fn_80e660(void* a, int b, void* c, int d, int e);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct CEEN { int m_0; int m_4; };
void ciErrErroneusNicknameHandler_0x80d740(CEEN* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb1b88, 0x11b2, (void*)0xbb1960);
    if (!self->m_4)
        return;
    fn_80e660(self, 2, (char*)self + 0x3b0, 0, 0);
}
} }

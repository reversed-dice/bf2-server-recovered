// FUNCTION: BF2 0x81c0c0
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct PFAP2 { int m_0; int m_4; };
int piFindActivePingCompareFn_0x81c0c0(PFAP2* arg1, PFAP2* arg2) {
    if (!arg1)
        fn_407ee8((void*)0xbb3f93, (void*)0xbb3ec8, 0x21c, (void*)0xbb3e40);
    if (!arg2)
        fn_407ee8((void*)0xbb3fae, (void*)0xbb3ec8, 0x21d, (void*)0xbb3e40);
    if (!(short)arg1->m_4)
        fn_407ee8((void*)0xbb3fc9, (void*)0xbb3ec8, 0x21e, (void*)0xbb3e40);
    if (!(short)arg2->m_4)
        fn_407ee8((void*)0xbb3fde, (void*)0xbb3ec8, 0x21f, (void*)0xbb3e40);
    return (unsigned short)arg1->m_4 - (unsigned short)arg2->m_4;
}
} }

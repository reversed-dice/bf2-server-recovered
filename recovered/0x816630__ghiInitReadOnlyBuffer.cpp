// FUNCTION: BF2 0x816630
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct GHIB7 {
    void* m_0;
    void* m_8;
    int m_10;
    int m_14;
    int m_18;
    int m_1c;
    int m_20;
    int m_24;
    int m_28;
};
int ghiInitReadOnlyBuffer_0x816630(void* arg1, GHIB7* arg2, void* arg3, int arg4) {
    if (!arg1)
        fn_407ee8((void*)0xbb30d3, (void*)0xbb3080, 0xa2, (void*)0xbb2fa0);
    if (!arg2)
        fn_407ee8((void*)0xbab281, (void*)0xbb3080, 0xa3, (void*)0xbb2fa0);
    if (!arg3)
        fn_407ee8((void*)0xbb30ee, (void*)0xbb3080, 0xa4, (void*)0xbb2fa0);
    if (arg4 <= 0)
        fn_407ee8((void*)0xbb30f9, (void*)0xbb3080, 0xa5, (void*)0xbb2fa0);
    arg2->m_0 = arg1;
    arg2->m_8 = arg3;
    arg2->m_10 = arg4;
    arg2->m_18 = 0;
    arg2->m_1c = 0;
    arg2->m_20 = 1;
    arg2->m_24 = 1;
    arg2->m_28 = 1;
    arg2->m_14 = arg4;
    return 1;
}
} }

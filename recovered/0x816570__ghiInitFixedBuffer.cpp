// FUNCTION: BF2 0x816570
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct GHIB5 {
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
int ghiInitFixedBuffer_0x816570(void* arg1, GHIB5* arg2, void* arg3, int arg4) {
    if (!arg1)
        fn_407ee8((void*)0xbb30d3, (void*)0xbb3080, 0x77, (void*)0xbb2f80);
    if (!arg2)
        fn_407ee8((void*)0xbab281, (void*)0xbb3080, 0x78, (void*)0xbb2f80);
    if (!arg3)
        fn_407ee8((void*)0xbb30ee, (void*)0xbb3080, 0x79, (void*)0xbb2f80);
    if (arg4 <= 0)
        fn_407ee8((void*)0xbb30f9, (void*)0xbb3080, 0x7a, (void*)0xbb2f80);
    arg2->m_0 = arg1;
    arg2->m_8 = arg3;
    arg2->m_10 = arg4;
    arg2->m_14 = 0;
    arg2->m_18 = 0;
    arg2->m_1c = 0;
    arg2->m_20 = 1;
    arg2->m_24 = 1;
    arg2->m_28 = 0;
    *(char*)arg3 = 0;
    return 1;
}
} }

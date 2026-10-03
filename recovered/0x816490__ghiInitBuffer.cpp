// FUNCTION: BF2 0x816490
namespace dice { namespace hfe {
extern int fn_816400(void* a, int b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct GHIB4 {
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
int ghiInitBuffer_0x816490(void* arg1, GHIB4* arg2, int arg3, int arg4) {
    if (!arg1)
        fn_407ee8((void*)0xbb30d3, (void*)0xbb3080, 0x46, (void*)0xbb2f70);
    if (!arg2)
        fn_407ee8((void*)0xbab281, (void*)0xbb3080, 0x47, (void*)0xbb2f70);
    if (arg3 <= 0)
        fn_407ee8((void*)0xbb30de, (void*)0xbb3080, 0x48, (void*)0xbb2f70);
    if (arg4 <= 0)
        fn_407ee8((void*)0xbb30a5, (void*)0xbb3080, 0x49, (void*)0xbb2f70);
    arg2->m_0 = arg1;
    arg2->m_8 = 0;
    arg2->m_10 = 0;
    arg2->m_14 = 0;
    arg2->m_18 = 0;
    arg2->m_1c = arg4;
    arg2->m_20 = 0;
    arg2->m_24 = 0;
    arg2->m_28 = 0;
    int r = fn_816400(arg2, arg3);
    if (r) {
        *(char*)((char*)arg2->m_8) = 0;
        return 1;
    }
    return 0;
}
} }

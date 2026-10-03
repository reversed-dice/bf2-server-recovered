// FUNCTION: BF2 0x647960
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_647900(void* a, void* b);
extern void fn_646f80(void* a, void* b);
struct TXE {
    unsigned char _pad[0x38];
    void* m_38;
    int m_40;
    void* Clone_0x647960();
};
void* TXE::Clone_0x647960() {
    void* r = (void*)0xbb25f1;
    if (m_40)
        r = m_38;
    void* p = fn_407508(0xa8);
    fn_647900(p, r);
    if (!p)
        return 0;
    fn_646f80(this, p);
    return p;
}
} }

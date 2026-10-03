// FUNCTION: BF2 0x4ff510
namespace dice { namespace hfe { namespace python {
extern void* fn_407508(int size);
extern void fn_505960(void* a);
extern void* g_108dd40;
struct PH2 {
    void* m_0;
    void* m_8;
    PH2();
};
PH2::PH2() {
    m_0 = (void*)0xb3ba10;
    void* p = fn_407508(0xd0);
    fn_505960(p);
    m_8 = p;
    g_108dd40 = p;
}
} } }

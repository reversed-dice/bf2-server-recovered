// FUNCTION: BF2 0x7a7b40
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void* fn_4073a8(int size);
struct OB58b {
    void* m_0;
    void* m_8;
    int m_10;
    void* m_18;
    void f_0x7a7b40();
};
void OB58b::f_0x7a7b40() {
    m_0 = fn_407508(0x70);
    m_8 = 0;
    m_10 = 0x1000;
    m_18 = fn_4073a8(0x1000);
}
} }

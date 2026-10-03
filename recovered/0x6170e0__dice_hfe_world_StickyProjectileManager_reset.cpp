// FUNCTION: BF2 0x6170e0
namespace dice { namespace hfe {
extern void fn_617250(void* self, void* a);
struct OB17 {
    void* m_0;
    void* m_8;
    void* m_10;
    void* m_18;
    void* m_20;
    void* m_28;
    void f_0x6170e0();
};
void OB17::f_0x6170e0() {
    fn_617250(this, m_10);
    m_10 = 0;
    m_28 = 0;
    m_18 = (char*)this + 0x8;
    m_20 = (char*)this + 0x8;
}
} }

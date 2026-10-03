// FUNCTION: BF2 0x5fcc00
namespace dice { namespace hfe {
extern void fn_5f5430(void* self, bool b);
struct OB2 {
    unsigned char _pad[0x170];
    char m_170;
    void f_0x5fcc00(bool b);
};
void OB2::f_0x5fcc00(bool b) {
    fn_5f5430(this, b);
    m_170 = 1;
}
} }

// FUNCTION: BF2 0x5f9000
namespace dice { namespace hfe {
extern void fn_5f51c0(void* self, int a);
struct OB {
    unsigned char _pad[0x96];
    char m_96;
    unsigned char _pad2[0x168 - 0x97];
    char m_168;
    void f_0x5f9000();
};
void OB::f_0x5f9000() {
    fn_5f51c0(this, 0);
    m_168 = 0;
    m_96 = 1;
}
} }

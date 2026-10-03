// FUNCTION: BF2 0x683b50
namespace dice { namespace hfe {
extern void fn_683b00(void* self, void* obj);
struct OB5 {
    unsigned char _pad[0x10];
    void* m_10;
    void f_0x683b50();
};
void OB5::f_0x683b50() {
    if (__builtin_expect(m_10 != 0, 1)) {
        fn_683b00(this, m_10);
        m_10 = 0;
    }
}
} }

// FUNCTION: BF2 0x797cc0
namespace dice { namespace hfe { namespace ai {
extern void* fn_798c50(void* obj);
struct KTM {
    unsigned char _pad[0x8];
    void* m_8;
    unsigned char _pad2[0x38 - 0x10];
    void* m_38;
    void f_0x797cc0();
};
void KTM::f_0x797cc0() {
    m_38 = fn_798c50((char*)this + 0x8);
}
} } }

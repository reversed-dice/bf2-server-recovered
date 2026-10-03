// FUNCTION: BF2 0x4cd4d0
namespace dice { namespace hfe {
extern void fn_74af10(void* a);
extern void fn_74af20(void* a);
extern void fn_74b0f0(void* a);
extern void fn_8411f0(void* a);
struct VS2 {
    unsigned char _pad[0x38];
    char m_38[0x20];
    unsigned char _pad2[0x58 - 0x58];
    char m_58;
    unsigned char _pad3[0x68 - 0x59];
    char m_68[0x38];
    char m_a0[0x30];
    void Stop_0x4cd4d0();
};
void VS2::Stop_0x4cd4d0() {
    fn_74af10((char*)this + 0xa0);
    m_58 = 1;
    fn_74af20((char*)this + 0xa0);
    fn_74b0f0((char*)this + 0x38);
    fn_8411f0((char*)this + 0x68);
}
} }

// FUNCTION: BF2 0x826ea0
namespace dice { namespace hfe {
extern void* fn_83add0(int a, int b, void* c);
struct SBA {
    unsigned char _pad[0x8];
    void* m_8;
    unsigned char _pad2[0xc00 - 0x10];
    void* m_c00;
    void f_0x826ea0();
};
void SBA::f_0x826ea0() {
    m_8 = fn_83add0(8, 0x64, 0);
    m_c00 = 0;
}
} }

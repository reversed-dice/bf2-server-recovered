// FUNCTION: BF2 0x7db9a0
namespace dice { namespace hfe { namespace io {
extern void* fn_4073a8(int size);
struct BSB {
    int m_0;
    unsigned char _pad[0x10 - 0x4];
    void* m_10;
    void allocate_0x7db9a0();
};
void BSB::allocate_0x7db9a0() {
    if (m_10 == 0)
        m_10 = fn_4073a8(m_0);
}
} } }

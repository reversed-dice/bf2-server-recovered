// FUNCTION: BF2 0x847160
namespace dice { namespace hfe {
extern void fn_8470e0();
struct DVT {
    void* m_0;
    unsigned char _pad[0x8 - 0x8];
    int m_8;
    int Stop_0x847160(unsigned int x);
};
int DVT::Stop_0x847160(unsigned int x) {
    if (!m_0 || m_8 != (int)x)
        return 0;
    fn_8470e0();
    return 1;
}
} }

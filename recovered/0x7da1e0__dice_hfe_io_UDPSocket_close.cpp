// FUNCTION: BF2 0x7da1e0
namespace dice { namespace hfe { namespace io {
extern void fn_408298(int fd);
struct UDP {
    unsigned char _pad[0x8];
    int m_8;
    void close_0x7da1e0();
};
void UDP::close_0x7da1e0() {
    if (m_8 != -1) {
        fn_408298(m_8);
        m_8 = -1;
    }
}
} } }

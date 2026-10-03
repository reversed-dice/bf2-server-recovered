// FUNCTION: BF2 0x8027d0
namespace dice { namespace hfe { namespace io {
extern long fn_407d78(int fd, unsigned int n, int a);
struct UFS2 {
    unsigned char _pad[0xc];
    int m_c;
    bool skip_0x8027d0(unsigned int n);
};
bool UFS2::skip_0x8027d0(unsigned int n) {
    return fn_407d78(m_c, 0, 1) != -1;
}
} } }

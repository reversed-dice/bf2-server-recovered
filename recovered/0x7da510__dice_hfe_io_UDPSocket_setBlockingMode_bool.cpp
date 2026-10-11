// FUNCTION: BF2 0x7da510
extern "C" int fcntl(int fd, int cmd, ...);

namespace dice { namespace hfe { namespace io {

class UDPSocket {
public:
    bool setBlockingMode(bool blocking);
private:
    unsigned char m_pad0[8];
    int m_socket;                  // +0x08
    unsigned char m_pad1[0x2f - 0x0c];
    bool m_blocking;               // +0x2f
};

bool UDPSocket::setBlockingMode(bool blocking) {
    int fd = m_socket;
    int flags = fcntl(fd, 3, 0);
    int nf = flags & ~0x800;
    if (!blocking)
        nf = flags | 0x800;
    int r = fcntl(fd, 4, nf);
    if (r == 0) {
        m_blocking = blocking;
        return true;
    }
    return false;
}

} } }

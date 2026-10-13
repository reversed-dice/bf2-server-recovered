// FUNCTION: BF2 0x7da220
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

struct sockaddr_in {
    unsigned short sin_family;
    unsigned short sin_port;
    unsigned int sin_addr;
    unsigned char sin_zero[8];
};

extern "C" int socket(int domain, int type, int protocol);
extern "C" int bind(int fd, const sockaddr_in* addr, int len);
extern "C" int close(int fd);

struct UDPSocket {
    char _pad[8];
    int m_fd;
    char _pad2[0x1e - 0xc];
    char m_addr[16];
    bool create(bool blocking);
};

typedef bool (*fn68_t)(void*, bool);

bool UDPSocket::create(bool blocking) {
    sockaddr_in local;
    *(unsigned long*)&local = 0;
// PERM_ORDER
    local.sin_addr = 0;
    local.sin_family = 2;
    local.sin_port = 0;
    *(unsigned long*)local.sin_zero = 0;
// PERM_ORDER_END
    *(unsigned long*)((char*)this + 0x1e) = *(unsigned long*)&local;
    *(unsigned long*)((char*)this + 0x26) = 0;
    m_fd = socket(2, 2, 0x11);
    if (m_fd != -1) {
        if (bind(m_fd, &local, 0x10) != -1) {
            if (((fn68_t)(*(void***)this)[0x68 / 8])(this, blocking))
                return true;
        }
        close(m_fd);
    }
    return false;
}

} } }

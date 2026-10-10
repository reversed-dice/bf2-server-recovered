// FUNCTION: BF2 0x7da2e0
namespace dice { namespace hfe { namespace io {
class ISocket { public: struct Address { unsigned int a, b, c, d; }; };
class UDPSocket {
public:
    unsigned char _pad0[0x1e];
    ISocket::Address m_localAddress __attribute__((packed));
    bool create(bool reuse);
    bool connect(const ISocket::Address& addr, bool blocking);
};
bool UDPSocket::connect(const ISocket::Address& addr, bool blocking)
{
    bool ok = create(false);
    m_localAddress = addr;
    return ok;
}
}}}

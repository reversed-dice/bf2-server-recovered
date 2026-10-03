// FUNCTION: BF2 0x8259a0
namespace dice { namespace hfe {
struct Addr2 {
    unsigned char _pad[0x8];
    unsigned int m_ip;
    unsigned short m_port;
    void set(unsigned int ip, unsigned short port);
};
void Addr2::set(unsigned int ip, unsigned short port) {
    m_ip = ip;
    m_port = port;
}
} }

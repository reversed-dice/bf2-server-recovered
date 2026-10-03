// FUNCTION: BF2 0x801390
namespace dice { namespace hfe { namespace io {
struct UFS {
    unsigned char _pad[0x10];
    unsigned int m_state;
    bool canRead_0x801390() const;
};
bool UFS::canRead_0x801390() const {
    return m_state <= 1;
}
} } }

// FUNCTION: BF2 0x7f3240
namespace dice { namespace hfe { namespace io {
struct FD2 {
    unsigned char _pad[0xc];
    unsigned int m_flags;
    bool buttonDown_0x7f3240(unsigned int mask) const;
};
bool FD2::buttonDown_0x7f3240(unsigned int mask) const {
    return (m_flags & mask) != 0;
}
} } }

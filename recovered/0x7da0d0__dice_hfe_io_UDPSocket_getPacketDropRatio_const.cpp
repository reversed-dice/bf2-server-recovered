// FUNCTION: BF2 0x7da0d0
namespace dice { namespace hfe { namespace io {
struct UDP {
    unsigned char _pad[0x30];
    float m_30;
    float getPacketDropRatio_0x7da0d0() const;
};
float UDP::getPacketDropRatio_0x7da0d0() const {
    return m_30 / *(float*)0xbab640 + *(float*)0xb2f3bc;
}
} } }

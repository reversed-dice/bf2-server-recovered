// FUNCTION: BF2 0x7da0f0
namespace dice { namespace hfe { namespace io {
class UDPSocket {
public:
    void setPacketDropRatio(float ratio);
    char pad[0x30];
    float m_dropRatio;
};
void UDPSocket::setPacketDropRatio(float ratio)
{
    if (ratio > 1.0f) ratio = 1.0f;
    if (ratio < 0.0f) ratio = 0.0f;
    m_dropRatio = (1.0f - ratio) * 100.0f;
}
}}}

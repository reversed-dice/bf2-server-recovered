// FUNCTION: BF2 0x7c4700
namespace dice { namespace hfe { namespace io {
class NetworkableInfo {
    char _pad[0x1c];
    float m_basePriority;
public:
    void setBasePriority(float v);
};
void NetworkableInfo::setBasePriority(float v) {
    if (v > 255.0f)
        m_basePriority = 255.0f;
    else
        m_basePriority = v;
}
} } }

// FUNCTION: BF2 0x5e3730
namespace dice { namespace hfe { namespace world {
class GenericFireArm {
public:
    unsigned char _pad[0x308];
    int m_308;
    unsigned char _pad2[0x20];
    void* m_330;
    int getNetworkSafeItemIndex() const;
};
int GenericFireArm::getNetworkSafeItemIndex() const {
    if (m_308 != -1) return m_308;
    return *(int*)((char*)m_330 + 0x248);
}
} } }

// FUNCTION: BF2 0x5e9380
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    void setNetworkSafeItemIndex(int index);

private:
    char m_pad0[0x308];
    int m_networkSafeItemIndex;
};

void GenericFireArm::setNetworkSafeItemIndex(int index) {
    m_networkSafeItemIndex = index;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setNetworkSafeItemIndex_int (0x5e9380)
// FUNCTION: BF2 0x5e9340
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    void setItemType(int type);

private:
    char m_pad0[0x304];
    int m_itemType;
};

void GenericFireArm::setItemType(int type) {
    m_itemType = type;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setItemType_int (0x5e9340)
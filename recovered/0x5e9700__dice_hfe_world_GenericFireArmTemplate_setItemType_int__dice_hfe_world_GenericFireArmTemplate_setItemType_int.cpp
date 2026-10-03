// FUNCTION: BF2 0x5e9700
namespace dice { namespace hfe { namespace world {

class GenericFireArmTemplate {
public:
    void setItemType(int type);

private:
    char m_pad0[0x24c];
    int m_itemType;
};

void GenericFireArmTemplate::setItemType(int type) {
    m_itemType = type;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_setItemType_int (0x5e9700)
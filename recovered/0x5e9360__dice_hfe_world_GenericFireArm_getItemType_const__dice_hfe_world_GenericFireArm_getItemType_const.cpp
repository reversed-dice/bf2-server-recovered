// FUNCTION: BF2 0x5e9360
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    unsigned int getItemType() const;

private:
    char m_pad0[0x304];
    int m_itemType;               // offset 0x304
};

unsigned int GenericFireArm::getItemType() const {
    return m_itemType;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getItemType_const (0x5e9360)
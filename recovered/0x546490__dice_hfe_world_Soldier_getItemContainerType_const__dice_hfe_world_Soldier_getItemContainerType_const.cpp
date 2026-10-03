// FUNCTION: BF2 0x546490
namespace dice { namespace hfe { namespace world {

struct ItemContainer {
    unsigned char _pad_0x220[0x220];
    unsigned int m_containerType;
};

class Soldier {
    unsigned char _pad_0x258[0x258];
    ItemContainer* m_itemContainer;
public:
    unsigned int getItemContainerType() const;
};

unsigned int Soldier::getItemContainerType() const {
    return m_itemContainer->m_containerType;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getItemContainerType_const (0x546490)
// FUNCTION: BF2 0x5240b0
namespace dice { namespace hfe { namespace world {

class Item {
public:
    unsigned int getItemIndex() const;

private:
    /* 0x00 */ void* vtable;
    /* 0x08 */ char _pad0[0x20];
    /* 0x28 */ void* m_pItemTemplate;
};

unsigned int Item::getItemIndex() const {
    return *(unsigned int*)((char*)m_pItemTemplate + 0x204);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_getItemIndex (0x5240b0)
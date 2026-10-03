// FUNCTION: BF2 0x5240c0
namespace dice { namespace hfe { namespace world {

class Item {
public:
    unsigned int getRank() const;

private:
    unsigned char _pad0[0x28];   // offset 0x00 - 0x27
    void* m_itemInfo;           // offset 0x28
};

} } }

unsigned int dice::hfe::world::Item::getRank() const {
    return *(unsigned int*)((char*)m_itemInfo + 0x210);
}
// REVERSED_FUNCTION: dice_hfe_world_Item_getRank_const (0x5240c0)
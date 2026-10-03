// FUNCTION: BF2 0x523f30
namespace dice { namespace hfe { namespace world {

class Item {
public:
    unsigned int enableItem();
    char _pad0x00[0x24C];
    unsigned char m_unk_0x24C;
};

unsigned int Item::enableItem() {
    if (m_unk_0x24C) return 0;
    m_unk_0x24C = 1;
    (*(void(**)(Item*, unsigned int, unsigned int))(*(unsigned long long*)this + 0xc0))(this, 0, 1);
    (*(void(**)(Item*, unsigned int))(*(unsigned long long*)this + 0x188))(this, 0);
    return 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Item::enableItem (0x523f30)
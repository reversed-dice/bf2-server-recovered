// FUNCTION: BF2 0x524480
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x524480(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_isEnabled (0x524480)

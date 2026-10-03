// FUNCTION: BF2 0x524490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x250];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x524490(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_getTeam (0x524490)

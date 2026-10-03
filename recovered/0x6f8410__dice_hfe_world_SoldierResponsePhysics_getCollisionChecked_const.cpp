// FUNCTION: BF2 0x6f8410
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6f8410(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_getCollisionChecked_const (0x6f8410)

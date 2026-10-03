// FUNCTION: BF2 0x6f8490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6f8490(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_getRef (0x6f8490)

// FUNCTION: BF2 0x6dfb90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6dfb90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_getCollisionGroups_const (0x6dfb90)

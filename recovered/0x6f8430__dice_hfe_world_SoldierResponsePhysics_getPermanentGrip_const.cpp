// FUNCTION: BF2 0x6f8430
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x101];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6f8430(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_getPermanentGrip_const (0x6f8430)

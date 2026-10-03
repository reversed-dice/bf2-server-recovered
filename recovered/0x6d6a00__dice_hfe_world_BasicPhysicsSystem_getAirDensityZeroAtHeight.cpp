// FUNCTION: BF2 0x6d6a00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    float m_v;
    float get() { return m_v; }
};
float get_0x6d6a00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BasicPhysicsSystem_getAirDensityZeroAtHeight (0x6d6a00)

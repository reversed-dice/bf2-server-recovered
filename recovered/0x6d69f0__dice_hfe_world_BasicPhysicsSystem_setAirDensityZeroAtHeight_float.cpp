// FUNCTION: BF2 0x6d69f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x6d69f0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BasicPhysicsSystem_setAirDensityZeroAtHeight_float (0x6d69f0)

// FUNCTION: BF2 0x637ae0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    float m_v;
    float get() { return m_v; }
};
float get_0x637ae0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_getUnderWater_const (0x637ae0)

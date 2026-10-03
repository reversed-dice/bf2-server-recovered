// FUNCTION: BF2 0x6d69d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    float m_v;
    float get() { return m_v; }
};
float get_0x6d69d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BasicPhysicsSystem_getGravity (0x6d69d0)

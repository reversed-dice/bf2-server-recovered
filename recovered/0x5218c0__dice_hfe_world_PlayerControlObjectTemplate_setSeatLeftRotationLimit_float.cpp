// FUNCTION: BF2 0x5218c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x258];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5218c0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setSeatLeftRotationLimit_float (0x5218c0)

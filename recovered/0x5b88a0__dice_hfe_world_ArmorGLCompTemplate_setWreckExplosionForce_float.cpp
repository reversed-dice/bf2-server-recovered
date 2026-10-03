// FUNCTION: BF2 0x5b88a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1a8];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5b88a0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_setWreckExplosionForce_float (0x5b88a0)

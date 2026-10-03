// FUNCTION: BF2 0x5b86e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x16c];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5b86e0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_setMaxHitPoints_float (0x5b86e0)

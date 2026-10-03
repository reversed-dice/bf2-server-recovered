// FUNCTION: BF2 0x5b8a60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e4];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5b8a60(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_setTimeToStayAfterDestroyed_float (0x5b8a60)

// FUNCTION: BF2 0x5216c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x338];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5216c0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setDirBarYScaleBelow_float (0x5216c0)

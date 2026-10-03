// FUNCTION: BF2 0x513b50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c9];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x513b50(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setHasGreyCapturingState_bool (0x513b50)

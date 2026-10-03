// FUNCTION: BF2 0x5adf90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x326];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5adf90(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundleTemplate_setEmitDirectionZFromSpeedDof_bool (0x5adf90)

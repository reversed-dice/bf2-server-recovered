// FUNCTION: BF2 0x4b7af0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4b7af0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Material_setOverrideNeverPenetrate_bool (0x4b7af0)

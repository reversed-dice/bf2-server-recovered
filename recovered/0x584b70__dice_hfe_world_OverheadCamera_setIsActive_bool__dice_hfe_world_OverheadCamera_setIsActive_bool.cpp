// FUNCTION: BF2 0x584b70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x290];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x584b70(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_setIsActive_bool (0x584b70)

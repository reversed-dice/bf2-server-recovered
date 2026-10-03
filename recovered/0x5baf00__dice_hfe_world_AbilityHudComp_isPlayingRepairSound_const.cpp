// FUNCTION: BF2 0x5baf00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x21];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5baf00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityHudComp_isPlayingRepairSound_const (0x5baf00)

// FUNCTION: BF2 0x5baf10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5baf10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityHudComp_isPlayingAmmoSound_const (0x5baf10)

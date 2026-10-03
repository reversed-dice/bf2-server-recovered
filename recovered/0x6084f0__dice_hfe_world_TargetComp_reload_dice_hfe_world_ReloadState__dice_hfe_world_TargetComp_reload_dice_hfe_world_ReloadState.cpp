// FUNCTION: BF2 0x6084f0
namespace dice { namespace hfe { namespace world {

class ReloadState {
};

class TargetComp {
    unsigned char m_pad[0x60];
    unsigned char m_reloading;
public:
    void reload(ReloadState state);
};

void TargetComp::reload(ReloadState state) {
    m_reloading = 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_reload_dice_hfe_world_ReloadState (0x6084f0)
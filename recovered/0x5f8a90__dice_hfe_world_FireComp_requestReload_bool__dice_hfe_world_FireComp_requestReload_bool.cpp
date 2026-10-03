// FUNCTION: BF2 0x5f8a90
namespace dice { namespace hfe { namespace world {

class FireComp {
    unsigned char pad_0x000[0x15c];
    int m_ammoClip;
public:
    bool requestReload();
};

bool FireComp::requestReload() {
    return m_ammoClip == 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_requestReload_bool (0x5f8a90)
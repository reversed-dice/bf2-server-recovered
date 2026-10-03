// FUNCTION: BF2 0x5f53a0
namespace dice { namespace hfe { namespace world {

struct FireSpec {
    char m_pad0[0x60];
    int m_ammoCount;                    // offset 0x60
};

class FireComp {
public:
    bool outOfAmmo();

private:
    char m_pad0[0x4c];                  // 0x00-0x4b
    int m_ammo;                         // 0x4c-0x4f
    char m_pad1[0x70];                  // 0x50-0xbf
    FireSpec* m_fireSpec;               // 0xc0-0xc7
};

bool FireComp::outOfAmmo() {
    m_ammo = m_fireSpec->m_ammoCount - 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_outOfAmmo_bool (0x5f53a0)
// FUNCTION: BF2 0x5f5450
namespace dice { namespace hfe { namespace world {

struct WeaponStats {
    unsigned char gap_0x00[0x50];
    unsigned int m_roundsPerMinute;
};

class FireComp {
public:
    unsigned int getRoundsPerMinute() const;
private:
    unsigned char gap_0x00[0xC0];
    WeaponStats* m_weaponStats;
};

unsigned int FireComp::getRoundsPerMinute() const {
    return m_weaponStats->m_roundsPerMinute;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getRoundsPerMinute_const (0x5f5450)
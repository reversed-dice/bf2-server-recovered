// FUNCTION: BF2 0x5f3500
namespace dice { namespace hfe { namespace world {

class ExplosivesFireComp {
public:
    bool getWeaponState() const;

private:
    char _pad0[0x170];
    int m_weaponState;
};

bool ExplosivesFireComp::getWeaponState() const {
    return m_weaponState == 2;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_getWeaponState_const (0x5f3500)
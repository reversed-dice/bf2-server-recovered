// FUNCTION: BF2 0x550a20
namespace dice { namespace hfe { namespace world {

class Soldier {
    unsigned char _pad0[0x2f8];
    void* m_weapons[1];
public:
    void* getActiveWeapon(int slot) const;
};

void* Soldier::getActiveWeapon(int slot) const {
    return m_weapons[slot];
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getActiveWeapon_int_const (0x550a20)
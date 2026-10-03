// FUNCTION: BF2 0x546820
namespace dice { namespace hfe { namespace world {

struct SoldierCamera {
    unsigned char _pad0[0x28];
    void* m_camera; // offset 0x28
};

class Soldier {
public:
    void* getSoldierCamera() const;
private:
    unsigned char _pad0[0x338];
    SoldierCamera* m_soldierCamera; // offset 0x338
};

void* Soldier::getSoldierCamera() const {
    return m_soldierCamera->m_camera;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getSoldierCamera (0x546820)
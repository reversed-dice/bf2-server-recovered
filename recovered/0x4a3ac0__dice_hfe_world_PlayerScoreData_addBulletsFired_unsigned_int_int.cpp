// FUNCTION: BF2 0x4a3ac0
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    char pad_0x0[0x60];
    std::map<unsigned int, unsigned short> m_vehicleTimers;  // +0x60

    void addBulletsFired(unsigned int id, int delta);
};

void PlayerScoreData::addBulletsFired(unsigned int id, int delta) {
    std::map<unsigned int, unsigned short>::iterator it = m_vehicleTimers.find(id);
    if (it != m_vehicleTimers.end()) {
        it->second += (unsigned short)delta;
        return;
    }
    m_vehicleTimers.insert(std::make_pair(id, (unsigned short)1));
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_addBulletsFired_unsigned_int_int (0x4a3ac0)

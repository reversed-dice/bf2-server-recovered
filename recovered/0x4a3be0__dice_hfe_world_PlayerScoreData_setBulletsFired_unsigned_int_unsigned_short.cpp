// FUNCTION: BF2 0x4a3be0
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    char pad_0x0[0x60];
    std::map<unsigned int, unsigned short> m_vehicleTimers;  // +0x60

    void setBulletsFired(unsigned int id, unsigned short value);
};

void PlayerScoreData::setBulletsFired(unsigned int id, unsigned short value) {
    std::map<unsigned int, unsigned short>::iterator it = m_vehicleTimers.find(id);
    if (it != m_vehicleTimers.end()) {
        it->second += value;
        return;
    }
    m_vehicleTimers.insert(std::make_pair(id, value));
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_setBulletsFired_unsigned_int_unsigned_short (0x4a3be0)

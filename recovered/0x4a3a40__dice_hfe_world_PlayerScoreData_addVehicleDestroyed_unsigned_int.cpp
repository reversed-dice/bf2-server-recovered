// FUNCTION: BF2 0x4a3a40
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    /* 0x000 */ unsigned char _pad0[0x30];
    /* 0x030 */ std::map<unsigned int, unsigned short> m_vehicleDestroyed;

    void addVehicleDestroyed(unsigned int id);
};

void PlayerScoreData::addVehicleDestroyed(unsigned int id) {
    std::map<unsigned int, unsigned short>& m = m_vehicleDestroyed;
    std::map<unsigned int, unsigned short>::iterator it = m.find(id);
    if (it != m.end()) {
        ++it->second;
    } else {
        m.insert(std::make_pair(id, (unsigned short)1));
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_addVehicleDestroyed_unsigned_int (0x4a3a40)

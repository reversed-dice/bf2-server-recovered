// FUNCTION: BF2 0x4a3b50
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    unsigned char _pad0[0x30];
    std::map<unsigned int, unsigned short> m_vehicleDestroyed;

    void setVehicleDestroyed(unsigned int id, unsigned short count);
};

void PlayerScoreData::setVehicleDestroyed(unsigned int id, unsigned short count) {
    std::map<unsigned int, unsigned short>& m = m_vehicleDestroyed;
    std::map<unsigned int, unsigned short>::iterator it = m.find(id);
    if (it != m.end()) {
        it->second = count;
    } else {
        m.insert(std::make_pair(id, count));
    }
}

} } }

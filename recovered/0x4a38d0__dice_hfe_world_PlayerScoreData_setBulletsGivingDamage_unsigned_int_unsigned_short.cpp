// FUNCTION: BF2 0x4a38d0
#include <map>

namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    void setBulletsGivingDamage(unsigned int index, unsigned short value);
private:
    char pad[0x90];
    std::map<unsigned int, unsigned short> m_map;
};

void PlayerScoreData::setBulletsGivingDamage(unsigned int index, unsigned short value)
{
    std::map<unsigned int, unsigned short>::iterator it = m_map.find(index);
    if (it != m_map.end())
        it->second += value;
    else
        m_map.insert(std::make_pair(index, value));
}

} } }

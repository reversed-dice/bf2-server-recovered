// FUNCTION: BF2 0x6818b0
#include <map>
#include <string>

namespace dice { namespace hfe { namespace world {

class PlayerManager {
public:
    char _pad0[0x60];
    std::map<unsigned int, std::string> m_playerClasses;   // +0x60

    void registerPlayerClass(unsigned int id, std::string const& name);
};

void PlayerManager::registerPlayerClass(unsigned int id, std::string const& name)
{
    m_playerClasses[id] = name;
}

} } }

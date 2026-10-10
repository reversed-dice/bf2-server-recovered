// FUNCTION: BF2 0x67fad0
#include <map>
#include <string>

namespace dice { namespace hfe { namespace world {

class PlayerManager {
public:
    char m_pad[0x60];
    std::map<unsigned int, std::string> m_playerClasses;   // +0x60

    const std::string& getClassNameFromPlayerClassID(unsigned int classId) const;
};

const std::string& PlayerManager::getClassNameFromPlayerClassID(unsigned int classId) const
{
    static std::string noClass("UnknownPlayerClass");
    std::map<unsigned int, std::string>::const_iterator it = m_playerClasses.find(classId);
    if (it != m_playerClasses.end())
        return it->second;
    return noClass;
}

}}}

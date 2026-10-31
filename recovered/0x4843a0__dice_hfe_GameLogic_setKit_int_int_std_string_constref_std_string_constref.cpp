// FUNCTION: BF2 0x4843a0
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad0[0x18 - 8];
    std::map<int, std::string> m_soldierSkins;        // +0x18
    std::map<int, std::string> m_kitTemplateStrings;  // +0x48

    virtual void setKit(int team, int kit, const std::string& a, const std::string& b);
};

void GameLogic::setKit(int team, int kit, const std::string& a, const std::string& b)
{
    int key = (team << 8) + kit;

    std::map<int, std::string>::iterator it = m_kitTemplateStrings.find(key);
    if (it == m_kitTemplateStrings.end())
        m_kitTemplateStrings.insert(std::make_pair(key, a));
    else
        it->second = a;

    it = m_soldierSkins.find(key);
    if (it == m_soldierSkins.end())
        m_soldierSkins.insert(std::make_pair(key, b));
    else
        it->second = b;
}

} }

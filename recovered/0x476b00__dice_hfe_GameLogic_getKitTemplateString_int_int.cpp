// FUNCTION: BF2 0x476b00
#include <string>
#include <map>

namespace dice { namespace hfe {

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad0[0x18 - 8];
    std::map<int, std::string> m_soldierSkins;        // +0x18
    std::map<int, std::string> m_kitTemplateStrings;  // +0x48

    virtual std::string getKitTemplateString(int team, int kit);
    virtual std::string getSoldierSkin(int team, int kit);
};

std::string GameLogic::getKitTemplateString(int team, int kit)
{
    int key = (team << 8) + kit;
    std::map<int, std::string>::iterator it = m_kitTemplateStrings.find(key);
    if (it != m_kitTemplateStrings.end()) {
        return it->second;
    }
    return "";
}

} }

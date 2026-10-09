// FUNCTION: BF2 0x678fd0
#include <string>
#include <vector>
#include <map>

namespace dice { namespace hfe {

class IModInfo {
public:
    struct Mod {
        char _pad[0x88];
        ~Mod();
    };

    virtual ~IModInfo();
};

class ModInfo : public IModInfo {
public:
    virtual ~ModInfo();

    char _pad0[0x8];
    std::vector<IModInfo::Mod> m_mods; // +0x10
    char _pad28[0x8];
    std::map<std::string, std::string> m_gameModeNames; // +0x30
};

ModInfo::~ModInfo()
{
}

} }

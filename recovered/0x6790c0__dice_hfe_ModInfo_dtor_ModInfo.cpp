// FUNCTION: BF2 0x6790c0
#include <map>
#include <string>
#include <vector>
namespace dice { namespace hfe {
class Mod { public: char pad[0x88]; ~Mod(); };
class ModInfo {
public:
    virtual ~ModInfo();
    char pad[0x8];
    std::vector<Mod> m_mods;   // +0x10
    char pad2[0x30-0x28];
    std::map<std::string, std::string> m_map;   // +0x30
};
ModInfo::~ModInfo() {}
}}

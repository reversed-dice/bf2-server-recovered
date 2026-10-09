// FUNCTION: BF2 0x678c00
#include <string>
#include <vector>

namespace dice { namespace hfe {

class IModInfo {
public:
    struct Map {
        char _pad[0x40];
        int gameSpyId; // +0x40
        char _pad44[4];
    };

    struct Mod {
        char _pad[0x48];
        std::vector<Map> maps; // +0x48 .. +0x60
        char _pad60[0x88 - 0x60];
    };

    virtual ~IModInfo();
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Map const* getMapFromGameSpyId(int id);

    char _pad[0x10 - 0x8];
    std::vector<IModInfo::Mod> m_mods; // +0x10
};

IModInfo::Map const* ModInfo::getMapFromGameSpyId(int id)
{
    for (unsigned int i = 0; i < m_mods.size(); ++i) {
        for (unsigned int j = 0; j < m_mods[i].maps.size(); ++j) {
            if (m_mods[i].maps[j].gameSpyId == id) {
                return &m_mods[i].maps[j];
            }
        }
    }
    return 0;
}

} }

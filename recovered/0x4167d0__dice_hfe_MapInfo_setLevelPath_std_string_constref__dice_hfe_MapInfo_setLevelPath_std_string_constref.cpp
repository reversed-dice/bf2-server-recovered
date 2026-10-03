// FUNCTION: BF2 0x4167d0
#include <string>

namespace dice { namespace hfe {

class MapInfo {
public:
    void setLevelPath(const std::string& levelPath);
private:
    void* vtable;                    // 0x00
    std::string m_levelPath;         // 0x08
    char pad[0x26 - 0x10];          // 0x10
    unsigned char m_hasLevelPath;    // 0x26
};

void MapInfo::setLevelPath(const std::string& levelPath) {
    m_levelPath = levelPath;
    m_hasLevelPath = 1;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_MapInfo_setLevelPath_std_string_constref (0x4167d0)
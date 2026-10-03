// FUNCTION: BF2 0x4167c0
#include <string>

namespace dice { namespace hfe {

class MapInfo {
public:
    void setGameMode(const std::string& mode);

private:
    std::string m_gameMode;      // offset 0x00, sz 0x08
    unsigned char m_pad[0x1E];   // offset 0x08, sz 0x1E
    unsigned char m_hasGameMode; // offset 0x26
};

void MapInfo::setGameMode(const std::string& mode) {
    m_gameMode.assign(mode);
    m_hasGameMode = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_setGameMode_std_string_constref (0x4167c0)
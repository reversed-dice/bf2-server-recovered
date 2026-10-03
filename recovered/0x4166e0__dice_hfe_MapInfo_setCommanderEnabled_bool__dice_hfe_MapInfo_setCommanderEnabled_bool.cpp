// FUNCTION: BF2 0x4166e0
namespace dice { namespace hfe {

class MapInfo {
public:
    void setCommanderEnabled(bool enabled);

private:
    unsigned char pad_0x00[0x1c];
    unsigned char m_commanderEnabled; // 0x1c
    unsigned char pad_0x1d[0x26 - 0x1d];
    unsigned char m_flag; // 0x26
};

void MapInfo::setCommanderEnabled(bool enabled) {
    m_commanderEnabled = enabled;
    m_flag = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_setCommanderEnabled_bool (0x4166e0)
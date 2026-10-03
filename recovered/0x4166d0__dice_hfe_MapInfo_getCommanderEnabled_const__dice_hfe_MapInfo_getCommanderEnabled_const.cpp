// FUNCTION: BF2 0x4166d0
class dice_hfe_MapInfo {
public:
    unsigned char __pad_00[0x1c];
    unsigned char m_commanderEnabled;

    unsigned char getCommanderEnabled() const;
};

unsigned char dice_hfe_MapInfo::getCommanderEnabled() const {
    return m_commanderEnabled;
}
// REVERSED_FUNCTION: dice_hfe_MapInfo_getCommanderEnabled_const::dice_hfe_MapInfo_getCommanderEnabled_const (0x4166d0)
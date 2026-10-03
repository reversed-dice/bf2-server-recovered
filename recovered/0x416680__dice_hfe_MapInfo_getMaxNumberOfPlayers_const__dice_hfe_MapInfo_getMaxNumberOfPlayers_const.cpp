// FUNCTION: BF2 0x416680
class dice_hfe_MapInfo {
public:
    unsigned char __pad_00[0x18];
    int m_maxNumberOfPlayers;

    int getMaxNumberOfPlayers() const;
};

int dice_hfe_MapInfo::getMaxNumberOfPlayers() const {
    return m_maxNumberOfPlayers;
}
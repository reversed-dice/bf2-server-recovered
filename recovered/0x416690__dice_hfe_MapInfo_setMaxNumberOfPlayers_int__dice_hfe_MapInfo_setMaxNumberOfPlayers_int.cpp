// FUNCTION: BF2 0x416690
namespace dice { namespace hfe {

class MapInfo {
    char pad_0x00[0x18];
    unsigned int m_maxPlayers;
    char pad_0x1C[0x0A];
    bool m_modified;

public:
    void setMaxNumberOfPlayers(unsigned int maxPlayers);
};

void MapInfo::setMaxNumberOfPlayers(unsigned int maxPlayers) {
    m_maxPlayers = maxPlayers;
    m_modified = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_setMaxNumberOfPlayers_int (0x416690)
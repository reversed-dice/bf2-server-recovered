// FUNCTION: BF2 0x416680
namespace dice { namespace hfe {
class MapInfo {
public:
    char _pad[0x18];
    int field;
    int getMaxNumberOfPlayers() const;
};
int MapInfo::getMaxNumberOfPlayers() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_getMaxNumberOfPlayers (0x416680)

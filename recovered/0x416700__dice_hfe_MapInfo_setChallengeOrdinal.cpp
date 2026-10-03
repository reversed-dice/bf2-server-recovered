// FUNCTION: BF2 0x416700
namespace dice { namespace hfe {
class MapInfo {
public:
    char _pad[0x20];
    int field;
    void setChallengeOrdinal(int v);
};
void MapInfo::setChallengeOrdinal(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_setChallengeOrdinal (0x416700)

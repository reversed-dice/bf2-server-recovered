// FUNCTION: BF2 0x4166f0
namespace dice { namespace hfe {
class MapInfo {
public:
    char _pad[0x20];
    int field;
    int getChallengeOrdinal() const;
};
int MapInfo::getChallengeOrdinal() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_getChallengeOrdinal (0x4166f0)

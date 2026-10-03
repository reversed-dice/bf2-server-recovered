// FUNCTION: BF2 0x4166f0
class dice_hfe_MapInfo {
public:
    unsigned char __pad_00[0x20];
    int m_challengeOrdinal;

    int getChallengeOrdinal() const;
};

int dice_hfe_MapInfo::getChallengeOrdinal() const {
    return m_challengeOrdinal;
}
// REVERSED_FUNCTION: dice_hfe_MapInfo_getChallengeOrdinal_const::dice_hfe_MapInfo_getChallengeOrdinal_const (0x4166f0)
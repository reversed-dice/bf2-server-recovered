// FUNCTION: BF2 0x416700
class dice_hfe_MapInfo {
public:
    unsigned char __pad_00[0x20];
    int m_challengeOrdinal;

    void setChallengeOrdinal_int(int val);
};

void dice_hfe_MapInfo::setChallengeOrdinal_int(int val) {
    m_challengeOrdinal = val;
}
// REVERSED_FUNCTION: dice_hfe_MapInfo_setChallengeOrdinal_int::dice_hfe_MapInfo_setChallengeOrdinal_int (0x416700)
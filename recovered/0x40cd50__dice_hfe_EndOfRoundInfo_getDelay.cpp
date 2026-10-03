// FUNCTION: BF2 0x40cd50
namespace dice { namespace hfe {
class EndOfRoundInfo {
public:
    char _pad[0x8];
    int field;
    int getDelay() const;
};
int EndOfRoundInfo::getDelay() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_getDelay (0x40cd50)

// FUNCTION: BF2 0x60c630
namespace dice { namespace hfe {
class SoldierBasedRecoilCompTemplate {
public:
    char _pad[0x50];
    int field;
    void setRecoilGraphNumFrames(int v);
};
void SoldierBasedRecoilCompTemplate::setRecoilGraphNumFrames(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SoldierBasedRecoilCompTemplate_setRecoilGraphNumFrames (0x60c630)

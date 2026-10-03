// FUNCTION: BF2 0x60c660
namespace dice { namespace hfe {
class SoldierBasedRecoilCompTemplate {
public:
    char _pad[0x49];
    bool field;
    void setGoBackOnRecoil(bool v);
};
void SoldierBasedRecoilCompTemplate::setGoBackOnRecoil(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SoldierBasedRecoilCompTemplate_setGoBackOnRecoil (0x60c660)

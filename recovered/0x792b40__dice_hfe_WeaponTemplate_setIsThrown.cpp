// FUNCTION: BF2 0x792b40
namespace dice { namespace hfe {
class WeaponTemplate {
public:
    char _pad[0x2];
    bool field;
    void setIsThrown(bool v);
};
void WeaponTemplate::setIsThrown(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponTemplate_setIsThrown (0x792b40)

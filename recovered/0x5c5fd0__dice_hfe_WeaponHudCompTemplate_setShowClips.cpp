// FUNCTION: BF2 0x5c5fd0
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x87];
    bool field;
    void setShowClips(bool v);
};
void WeaponHudCompTemplate::setShowClips(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setShowClips (0x5c5fd0)

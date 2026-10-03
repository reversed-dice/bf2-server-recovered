// FUNCTION: BF2 0x521440
namespace dice { namespace hfe {
class PlayerControlObject {
public:
    char _pad[0x4c4];
    int field;
    void setAmmoStatus(int v);
};
void PlayerControlObject::setAmmoStatus(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObject_setAmmoStatus (0x521440)

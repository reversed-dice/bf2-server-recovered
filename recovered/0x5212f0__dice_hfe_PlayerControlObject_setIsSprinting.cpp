// FUNCTION: BF2 0x5212f0
namespace dice { namespace hfe {
class PlayerControlObject {
public:
    char _pad[0x492];
    bool field;
    void setIsSprinting(bool v);
};
void PlayerControlObject::setIsSprinting(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObject_setIsSprinting (0x5212f0)

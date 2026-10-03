// FUNCTION: BF2 0x521460
namespace dice { namespace hfe {
class PlayerControlObject {
public:
    char _pad[0x5f8];
    bool field;
    void setGiveUnmannedInput(bool v);
};
void PlayerControlObject::setGiveUnmannedInput(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObject_setGiveUnmannedInput (0x521460)

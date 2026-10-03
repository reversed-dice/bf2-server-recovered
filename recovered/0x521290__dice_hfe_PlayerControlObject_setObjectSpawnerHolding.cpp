// FUNCTION: BF2 0x521290
namespace dice { namespace hfe {
class PlayerControlObject {
public:
    char _pad[0x3f0];
    bool field;
    void setObjectSpawnerHolding(bool v);
};
void PlayerControlObject::setObjectSpawnerHolding(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObject_setObjectSpawnerHolding (0x521290)

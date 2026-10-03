// FUNCTION: BF2 0x521210
namespace dice { namespace hfe {
class PlayerControlObject {
public:
    char _pad[0x3ec];
    int field;
    void setObjectSpawnerId(int v);
};
void PlayerControlObject::setObjectSpawnerId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObject_setObjectSpawnerId (0x521210)

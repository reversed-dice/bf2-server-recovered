// FUNCTION: BF2 0x44d9b0
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    char _pad[0x14];
    int field;
    void setConnectionId(int v);
};
void PlayerActionManager::setConnectionId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_setConnectionId (0x44d9b0)

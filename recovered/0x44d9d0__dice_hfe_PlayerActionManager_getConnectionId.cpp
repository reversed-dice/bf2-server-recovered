// FUNCTION: BF2 0x44d9d0
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    char _pad[0x14];
    int field;
    int getConnectionId() const;
};
int PlayerActionManager::getConnectionId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_getConnectionId (0x44d9d0)

// FUNCTION: BF2 0x441960
namespace dice { namespace hfe {
class GameEventManager {
public:
    char _pad[0x14];
    int field;
    int getConnectionId() const;
};
int GameEventManager::getConnectionId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_getConnectionId (0x441960)

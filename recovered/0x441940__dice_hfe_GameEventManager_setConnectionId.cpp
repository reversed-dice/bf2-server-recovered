// FUNCTION: BF2 0x441940
namespace dice { namespace hfe {
class GameEventManager {
public:
    char _pad[0x14];
    int field;
    void setConnectionId(int v);
};
void GameEventManager::setConnectionId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_setConnectionId (0x441940)

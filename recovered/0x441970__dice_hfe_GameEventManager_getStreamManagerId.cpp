// FUNCTION: BF2 0x441970
namespace dice { namespace hfe {
class GameEventManager {
public:
    char _pad[0x120];
    int field;
    int getStreamManagerId() const;
};
int GameEventManager::getStreamManagerId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_getStreamManagerId (0x441970)

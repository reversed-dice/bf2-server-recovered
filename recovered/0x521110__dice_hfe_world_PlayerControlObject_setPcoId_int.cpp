// FUNCTION: BF2 0x521110
namespace dice { namespace hfe {
class GameEventManager {
public:
    void setStreamManagerId(int param);
};
void GameEventManager::setStreamManagerId(int param) {
    if (*(int*)((char*)this + 0x260) != -1) {
        return;
    }
    *(int*)((char*)this + 0x260) = param;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_setStreamManagerId_int (0x441980)
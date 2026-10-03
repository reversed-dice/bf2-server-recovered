// FUNCTION: BF2 0x449590
namespace dice { namespace hfe {
class GameEventManager {
public:
    void setStreamManagerId(int param);
};
void GameEventManager::setStreamManagerId(int param) {
    if (*(int*)((char*)this + 0x2104) != -1) {
        return;
    }
    *(int*)((char*)this + 0x2104) = param;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_setStreamManagerId_int (0x441980)
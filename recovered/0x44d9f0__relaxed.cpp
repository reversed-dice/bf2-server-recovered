// FUNCTION: BF2 0x44d9f0
namespace dice { namespace hfe {
class GameEventManager {
public:
    void setStreamManagerId(int param);
};
void GameEventManager::setStreamManagerId(int param) {
    if (*(int*)((char*)this + 0x78) != -1) {
        return;
    }
    *(int*)((char*)this + 0x78) = param;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventManager_setStreamManagerId_int (0x441980)
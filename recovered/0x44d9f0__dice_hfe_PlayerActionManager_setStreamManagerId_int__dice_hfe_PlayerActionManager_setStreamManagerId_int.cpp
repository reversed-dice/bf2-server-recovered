// FUNCTION: BF2 0x44d9f0
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    void setStreamManagerId(int id);
};
void PlayerActionManager::setStreamManagerId(int id) {
    if (*(int*)((char*)this + 0x78) != -1) {
        return;
    }
    *(int*)((char*)this + 0x78) = id;
}
} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_setStreamManagerId_int (0x44d9f0)
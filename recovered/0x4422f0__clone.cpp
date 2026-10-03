// FUNCTION: BF2 0x4422f0
namespace dice { namespace hfe { namespace world {
class IPlayer;
} }

class PlayerActionManager {
public:
    void setPlayer(dice::hfe::world::IPlayer* player);
};

void PlayerActionManager::setPlayer(dice::hfe::world::IPlayer* player) {
    *(unsigned long long*)((char*)this + 0x4240) = (unsigned long long)player;
}
}
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_setPlayer_dice_hfe_world_IPlayerptr (0x44caf0)
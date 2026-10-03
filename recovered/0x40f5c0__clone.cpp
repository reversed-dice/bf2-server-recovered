// FUNCTION: BF2 0x40f5c0
namespace dice { namespace hfe { namespace world {

class TriggerManager {
public:
    // offset 0x00: vtable pointer
    static TriggerManager* m_instance; // 0x0108f1a0

    void handleUpdate(float dt, unsigned int flags); // 0x00566010
};

} } }

namespace dice { namespace hfe {

class Game {
public:
    void updateTriggerManager(float dt); // 0x40f590
};

void Game::updateTriggerManager(float dt) {
    world::TriggerManager* mgr = world::TriggerManager::m_instance;
    if (mgr) {
        mgr->handleUpdate(dt, 0);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_updateTriggerManager_float (0x40f590)
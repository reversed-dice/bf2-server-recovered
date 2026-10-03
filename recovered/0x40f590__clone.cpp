// FUNCTION: BF2 0x40f590
namespace dice { namespace hfe { namespace world {

class TriggerableManager {
public:
    static TriggerableManager* m_instance;
    void handleUpdate(float, unsigned int);
};

} } }

namespace dice { namespace hfe {

void Game_updateTriggerableManager_float(float param) {
    world::TriggerableManager* inst = world::TriggerableManager::m_instance;
    if (inst) {
        inst->handleUpdate(param, 0);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_updateTriggerableManager_float (0x40f5c0)
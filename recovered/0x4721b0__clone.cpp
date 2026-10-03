// FUNCTION: BF2 0x4721b0
namespace world {
    class TriggerableManager {
    public:
        static TriggerableManager* m_instance;
        void refresh();
    };
}

namespace dice { namespace hfe {
    class GameLogic {
    public:
        void refreshTriggerables();
    };

    void GameLogic::refreshTriggerables() {
        world::TriggerableManager* mgr = world::TriggerableManager::m_instance;
        if (mgr) {
            mgr->refresh();
        }
    }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_refreshTriggerables (0x475c90)
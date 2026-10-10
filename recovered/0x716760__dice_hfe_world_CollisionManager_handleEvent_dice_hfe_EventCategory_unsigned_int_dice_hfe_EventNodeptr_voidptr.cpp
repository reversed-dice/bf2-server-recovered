// FUNCTION: BF2 0x716760
namespace dice {
namespace hfe {

enum EventCategory {
    EC_5 = 5,
    EC_9 = 9
};

class EventNode;

namespace world {

class CollisionManager {
public:
    virtual ~CollisionManager();
#define PAD_VF(n) virtual void vf_##n();
    PAD_VF(1) PAD_VF(2) PAD_VF(3) PAD_VF(4) PAD_VF(5) PAD_VF(6) PAD_VF(7) PAD_VF(8)
    PAD_VF(9) PAD_VF(10) PAD_VF(11) PAD_VF(12) PAD_VF(13) PAD_VF(14) PAD_VF(15) PAD_VF(16)
    PAD_VF(17) PAD_VF(18) PAD_VF(19) PAD_VF(20) PAD_VF(21) PAD_VF(22) PAD_VF(23) PAD_VF(24)
    PAD_VF(25) PAD_VF(26) PAD_VF(27)
    virtual void targetVirtualMethod();

    void postLevelLoad();
    void preLevelLoad();
    void drawDebugPrimitives();
    virtual void handleEvent(EventCategory category, unsigned int eventId, EventNode* node, void* data);
};

void CollisionManager::handleEvent(EventCategory category, unsigned int eventId, EventNode* node, void* data) {
    if (category == 9) {
        if (eventId == 0) {
            drawDebugPrimitives();
            targetVirtualMethod();
        }
    } else if (category == 5) {
        if (eventId == 2) {
            preLevelLoad();
        } else if (eventId == 3) {
            postLevelLoad();
        }
    }
}

}
}
}

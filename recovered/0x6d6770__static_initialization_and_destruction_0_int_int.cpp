// FUNCTION: BF2 0x6d6770
#include <string.h>

namespace dice { namespace hfe { namespace world {

struct CollisionStatsData {
    float m_data[15];
};

CollisionStatsData collisionStatsData_internal;

namespace {
struct CollisionStatsDataInit {
    CollisionStatsDataInit() {
        memset(&collisionStatsData_internal, 0, sizeof(collisionStatsData_internal));
    }
};
CollisionStatsDataInit collisionStatsDataInit;
}

} } }

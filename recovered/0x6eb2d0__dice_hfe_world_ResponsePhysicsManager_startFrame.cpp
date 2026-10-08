// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6eb2d0
#include <string.h>

namespace dice { namespace hfe { namespace world {

extern void* collisionStatsData;

class ResponsePhysicsManager {
public:
    char _pad0[0x68];
    void* m_pObject;
    void startFrame();
};

void ResponsePhysicsManager::startFrame()
{
    if (!m_pObject)
        m_pObject = (void*)operator new(1);
    memset(collisionStatsData, 0, 0x3c);
}

} } }

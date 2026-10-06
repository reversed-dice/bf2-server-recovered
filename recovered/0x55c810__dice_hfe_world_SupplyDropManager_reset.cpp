// FUNCTION: BF2 0x55c810
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
namespace dice { namespace hfe { namespace world {

class SupplyDropManager {
public:
    virtual ~SupplyDropManager();
    void reset();
    std::map<int, float> m_drops;
    float m_timer;
    float m_interval;
};

void SupplyDropManager::reset()
{
    m_drops.clear();
    m_interval = 0;
    m_timer = 0;
}

} } }

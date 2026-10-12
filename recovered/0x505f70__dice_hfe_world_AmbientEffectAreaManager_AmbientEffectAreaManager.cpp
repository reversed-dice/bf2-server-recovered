// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x505f70
#include <map>

namespace dice { namespace hfe { namespace world {

class AmbientEffectAreaManager {
public:
    AmbientEffectAreaManager();

    std::map<void*, void*> m_map1;
    std::map<int, void*> m_map2;

    static AmbientEffectAreaManager* m_instance;
};

AmbientEffectAreaManager::AmbientEffectAreaManager()
{
    if (!m_instance)
        m_instance = this;
}

} } }

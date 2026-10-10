// FUNCTION: BF2 0x6b6520
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace anim {

class Bundle {
public:
    void init();
};

class BundleManager {
public:
    void postLoad();
    std::map<int, Bundle*> m_bundles;
};

void BundleManager::postLoad()
{
    for (std::map<int, Bundle*>::iterator it = m_bundles.begin();
         it != m_bundles.end(); ++it) {
        it->second->init();
    }
}

}}

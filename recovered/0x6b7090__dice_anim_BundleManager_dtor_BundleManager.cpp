// FUNCTION: BF2 0x6b7090
// BF2_FLAGS: -fno-strict-aliasing
// dice_anim_BundleManager_dtor_BundleManager (0x6b7090)
#include <map>

struct Bundle { ~Bundle(); };

class BundleManager {
public:
    std::map<void*, Bundle*> m_bundles;
    ~BundleManager();
};

BundleManager::~BundleManager()
{
    for (std::map<void*, Bundle*>::iterator i = m_bundles.begin();
         i != m_bundles.end(); ++i)
        delete i->second;
}

// REVERSED_FUNCTION: dice_anim_BundleManager_dtor_BundleManager (0x6b7090)

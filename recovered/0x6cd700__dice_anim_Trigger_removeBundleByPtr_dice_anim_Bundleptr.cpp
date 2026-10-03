// FUNCTION: BF2 0x6cd700
#include <vector>
namespace dice { namespace anim {

class Bundle;

class Trigger {
public:
    void removeBundleByPtr(Bundle* b);
    char _pad0[0x8];
    std::vector<Bundle*> m_bundles;
};

void Trigger::removeBundleByPtr(Bundle* b)
{
    for (std::vector<Bundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        if (*it == b) {
            m_bundles.erase(it);
            return;
        }
    }
}

} }

// FUNCTION: BF2 0x6b7230
#include <set>
#include <string>
#include <vector>

namespace dice { namespace anim {

class BundleManager {
public:
    std::set<std::string> m_bundles;
    void getBundles(std::vector<std::string>& out) const;
};

void BundleManager::getBundles(std::vector<std::string>& out) const {
    for (std::set<std::string>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        out.push_back(*it);
    }
}

}}
// REVERSED_FUNCTION: dice_anim_BundleManager_getBundles_std_vector_std_string_std_allocator_std_string_const (0x6b7230)

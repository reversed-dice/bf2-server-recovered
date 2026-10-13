// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6b7540
#include <sstream>
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class Bundle {
public:
    ~Bundle();
};

class BundleManager {
public:
    ~BundleManager();

    std::map<std::string, Bundle*, dice::hfe::NoCaseStringCompare> m_bundles;

    std::string listBundles() const;
};

std::string BundleManager::listBundles() const {
    std::stringstream ss;
    std::map<std::string, Bundle*, dice::hfe::NoCaseStringCompare>::const_iterator it = m_bundles.begin();
    if (it != m_bundles.end()) {
        do {
            ss << it->first << "\n";
            ++it;
        } while (it != m_bundles.end());
    }
    return ss.str();
}

} }

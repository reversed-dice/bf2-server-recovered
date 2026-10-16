// FUNCTION: BF2 0x6b6e90
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};
}}

namespace dice { namespace anim {

class BundleManager;

class Bundle {
public:
    char _pad[0x40];
    Bundle(BundleManager* mgr);
};

class BundleManager {
public:
    std::map<std::string, Bundle*, dice::hfe::NoCaseStringCompare> m_bundles;
    Bundle* m_active;
    Bundle* createBundle(std::string const& name);
};

Bundle* BundleManager::createBundle(std::string const& name)
{
    Bundle* b;
    if (m_bundles.find(name) == m_bundles.end()) {
        b = new Bundle(this);
        m_active = b;
        m_bundles.insert(std::make_pair(name, b));
    } else {
        m_active = 0;
        b = 0;
    }
    return b;
}

}}

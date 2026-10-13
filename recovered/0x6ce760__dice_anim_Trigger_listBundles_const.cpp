// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6ce760
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace anim {

class Bundle;

class BundleManager {
public:
    std::string const& getBundleName(Bundle const* b) const;
};

struct BundleHolder {
    char _pad[0x10];
    BundleManager* m_10;
};

class SystemTemplateManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual BundleHolder* getHolder();
};

extern SystemTemplateManager* animationSystemTemplateManager;

class Bundle { };

class Trigger {
public:
    void* m_vptr;   // +0x0
    std::vector<Bundle*> m_bundles;   // +0x8
    std::string listBundles() const;
};

std::string Trigger::listBundles() const {
    std::stringstream ss;
    std::vector<Bundle*>::const_iterator it = m_bundles.begin();
    while (it != m_bundles.end()) {
        Bundle* b = *it;
        ss << animationSystemTemplateManager->getHolder()->m_10->getBundleName(b) << "\n";
        ++it;
    }
    return ss.str();
}

} }

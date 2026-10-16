// FUNCTION: BF2 0x6d1ad0
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class ValueHolder {
public:
    ValueHolder();
    char _pad[0x14];
};

class ValueHolderManager {
public:
    ValueHolder* get(const std::string& name);
    ValueHolder* createValueHolder(const std::string& name);

    std::map<std::string, ValueHolder*, dice::hfe::NoCaseStringCompare> m_holders;
    ValueHolder* m_active;
};

ValueHolder* ValueHolderManager::createValueHolder(const std::string& name) {
    ValueHolder* h = get(name);
    if (h == 0) {
        h = new ValueHolder();
        m_holders.insert(std::make_pair(std::string(name), h));
        m_active = h;
    }
    return h;
}

} }

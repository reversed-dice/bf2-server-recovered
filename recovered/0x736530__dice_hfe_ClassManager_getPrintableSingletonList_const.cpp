// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x736530
#include <map>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

class SingletonInfo {
public:
    std::string name;
};

class SimpleSingletonInfo {
public:
    std::string name;
};

class ClassManager {
public:
    virtual void addRef();
    char _pad0[0x80];
    std::map<std::string, SingletonInfo> m_singletons;
    char _padb[8];
    std::map<std::string, SimpleSingletonInfo> m_simpleSingletons;
    std::string getPrintableSingletonList() const;
};

std::string ClassManager::getPrintableSingletonList() const {
    std::stringstream oss;
    oss << "\nSimple Singletons:\n------------------\n";
    for (std::map<std::string, SimpleSingletonInfo>::const_iterator it = m_simpleSingletons.begin(); it != m_simpleSingletons.end(); ++it) {
        oss << it->first << "\n";
    }
    oss << "\nNormal Singletons:\n------------------\n";
    for (std::map<std::string, SingletonInfo>::const_iterator it = m_singletons.begin(); it != m_singletons.end(); ++it) {
        oss << it->first << "\n";
    }
    return oss.str();
}

} }

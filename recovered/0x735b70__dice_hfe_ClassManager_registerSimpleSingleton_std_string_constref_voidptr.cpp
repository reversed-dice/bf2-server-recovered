// FUNCTION: BF2 0x735b70
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {

class ClassManager {
public:
    char _pad[0xc0];
    std::map<std::string, void*> m_simpleSingletons;
    void registerSimpleSingleton(std::string const& name, void* ptr);
};

void ClassManager::registerSimpleSingleton(std::string const& name, void* ptr) {
    m_simpleSingletons.insert(std::make_pair(name, ptr));
}

} }

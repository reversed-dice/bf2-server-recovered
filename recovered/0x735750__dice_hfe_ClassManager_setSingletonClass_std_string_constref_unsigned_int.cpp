// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x735750
#include <string>
#include <map>

namespace dice { namespace hfe {

class ClassManager {
public:
    struct SingletonInfo {
        void* instance;        // +0x0
        char _pad8[4];         // +0x8
        unsigned int classId;  // +0xc
        unsigned int flags;    // +0x10
    };

    void createSingleton(std::string const& name, SingletonInfo& info);
    bool setSingletonClass(std::string const& name, unsigned int classId);

    char _pad[0x88];
    std::map<std::string, SingletonInfo> m_singletons; // +0x88
    bool m_singletonsInited; // +0xb8
};

bool ClassManager::setSingletonClass(std::string const& name, unsigned int classId)
{
    std::map<std::string, SingletonInfo>::iterator it = m_singletons.find(name);
    if (it != m_singletons.end()) {
        it->second.classId = classId;
        if (m_singletonsInited) {
            createSingleton(it->first, it->second);
        }
        return true;
    }
    return false;
}

} }

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7356e0
#include <string>
#include <map>

namespace dice { namespace hfe {

class ClassManager {
public:
    struct SingletonInfo {
        void* instance;        // +0x0
        unsigned int classId;  // +0x8
        char _padC[4];         // +0xc
        unsigned int flags;    // +0x10
    };

    void createSingleton(std::string const& name, SingletonInfo& info);
    void initSingletons();

    char _pad[0x88];
    std::map<std::string, SingletonInfo> m_singletons; // +0x88
    bool m_singletonsInited; // +0xb8
};

void ClassManager::initSingletons()
{
    std::map<std::string, SingletonInfo>::iterator it = m_singletons.begin();
    std::map<std::string, SingletonInfo>::iterator end = m_singletons.end();
    while (end != it) {
        if (it->second.flags & 1) {
            createSingleton(it->first, it->second);
        }
        ++it;
    }
    m_singletonsInited = true;
}

} }

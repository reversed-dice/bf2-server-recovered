// FUNCTION: BF2 0x735b00
#include <string>
#include <map>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
};

class ClassManager {
public:
    struct SingletonInfo {
        IBase** pInstance;     // +0x0: pointer to IBase*!
        char _pad8[4];         // +0x8
        unsigned int classId;  // +0xc
        unsigned int flags;    // +0x10
    };

    void* getSingletonAs(std::string const& name, unsigned int interfaceId);

    char _pad[0x88];
    std::map<std::string, SingletonInfo> m_singletons; // +0x88
};

void* ClassManager::getSingletonAs(std::string const& name, unsigned int interfaceId)
{
    std::map<std::string, SingletonInfo>::iterator it = m_singletons.find(name);
    if (it != m_singletons.end()) {
        return (*it->second.pInstance)->queryInterface(interfaceId);
    }
    return 0;
}

} }

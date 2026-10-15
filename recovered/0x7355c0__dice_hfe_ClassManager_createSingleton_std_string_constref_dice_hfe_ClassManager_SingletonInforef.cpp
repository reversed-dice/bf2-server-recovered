// FUNCTION: BF2 0x7355c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void* queryInterface(unsigned int id);
};

std::string formatString(char const* fmt, ...);

class ClassManager {
public:
    struct SingletonInfo {
        IBase** pInstance;     // +0x0: pointer to IBase*!
        char _pad8[4];         // +0x8
        unsigned int classId;  // +0xc
        unsigned int flags;    // +0x10
    };

    virtual void v00();                                            // +0x0
    virtual void v08();                                            // +0x8
    virtual void v10();                                            // +0x10
    virtual void* queryInterface(unsigned int id) const;           // +0x18
    virtual ~ClassManager();                                       // +0x20
    virtual void registerServer(void* server);                     // +0x30
    virtual void unregisterServer(void* server);                   // +0x38
    virtual void setDefaultClass(unsigned int, unsigned int);      // +0x40
    virtual void getDefaultClass(unsigned int, unsigned int&);     // +0x48
    virtual bool getClassName(unsigned int, std::string& name);    // +0x50
    virtual void getClassID(std::string const& name, unsigned int& id); // +0x58
    virtual void createInstance(unsigned int, IBase*);             // +0x60
    virtual IBase* createInstance(unsigned int classId, unsigned int, IBase* parent); // +0x68

    void createSingleton(std::string const& name, SingletonInfo& info);
};

void ClassManager::createSingleton(std::string const& name, SingletonInfo& info)
{
    if (*info.pInstance)
        (*info.pInstance)->v10();
    *info.pInstance = createInstance(info.classId, *(unsigned int*)info._pad8, 0);
    std::string local;
    if (!getClassName(info.classId, local))
        local = formatString("Unknown ID %d", info.classId);
}

} }

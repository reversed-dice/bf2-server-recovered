// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x682f50
#include <string>
#include <map>
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef() = 0;
    virtual int getRef() = 0;
    virtual void release() = 0;
    virtual IBase* queryInterface(unsigned int iid) const = 0;
};

class INametagManager : public IBase {
public:
    virtual void update() = 0;
};

class IClassManager {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual IBase* getSingleton(const std::string& name);
};

extern IClassManager* classManager;

namespace {
class NullNametagManager : public INametagManager {
public:
    virtual void addRef() {}
    virtual int getRef() { return 1; }
    virtual void release() {}
    virtual IBase* queryInterface(unsigned int) const { return 0; }
    virtual void update() {}
    std::map<int, int> m_colors;
};
}

class SingletonServer {
public:
    static void init();
    static INametagManager* m_iNametagManager;
};

void SingletonServer::init()
{
    m_iNametagManager = static_cast<INametagManager*>(classManager->getSingleton("NametagManager"));
    if (!m_iNametagManager)
        m_iNametagManager = new NullNametagManager;
}

} }

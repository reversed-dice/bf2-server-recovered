// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7357b0
#include <string>
#include <map>

namespace dice { namespace hfe {

std::string formatString(const char* fmt, ...);

class ClassManager {
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
    virtual void v9();
    virtual bool findClass(unsigned int cid, std::string& name);

    struct SingletonInfo {
        void* instance;      // +0x0
        unsigned int iid;    // +0x8
        unsigned int cid;    // +0xc
        unsigned int flags;  // +0x10
        SingletonInfo() {}
    };

    void createSingleton(std::string const& name, SingletonInfo& info);
    void registerSingleton(struct SingletonRegInfo const& reg);

    char _pad[0x80];
    std::map<std::string, SingletonInfo> m_singletons; // +0x88
};

struct SingletonRegInfo {
    std::string name;
    ClassManager::SingletonInfo info;
};

void ClassManager::registerSingleton(SingletonRegInfo const& reg)
{
    SingletonInfo info;
    info.instance = reg.info.instance;
    info.iid = reg.info.iid;
    info.cid = reg.info.cid;
    info.flags = reg.info.flags;
    m_singletons[reg.name] = info;
    if (info.flags & 2) {
        createSingleton(reg.name, info);
    }
    std::string msg;
    if (!findClass(info.cid, msg)) {
        msg = formatString("Unknown ID %d", info.cid);
    }
}

} }

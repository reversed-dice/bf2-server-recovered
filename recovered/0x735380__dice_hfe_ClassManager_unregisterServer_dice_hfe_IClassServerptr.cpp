// FUNCTION: BF2 0x735380
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <algorithm>

namespace dice { namespace hfe {

class IBase;
class IClassServer;

class ClassManager {
public:
    struct ClassInfo {
        void* createFn;        // +0x0
        unsigned int classId;  // +0x8
        std::string className; // +0x10
        void* parent;          // +0x18
        bool operator==(std::string const& n) const { return className == n; }
    };

    struct SingletonRegInfo {
        std::string name;      // +0x0
        void* ptr;             // +0x8
        unsigned int iid;      // +0x10
        unsigned int cid;      // +0x14
        unsigned int value;    // +0x18
    };

    struct ServerClass {
        void* factory;         // +0x0
        std::string className; // +0x8
        void* extra;           // +0x10
    };

    virtual void addRef();                                       // +0x0 slot 0
    virtual void getRef();                                       // +0x8 slot 1
    virtual void release();                                      // +0x10 slot 2
    virtual void queryInterface(unsigned int) const;             // +0x18 slot 3
    virtual ~ClassManager();                                     // +0x20 slot 4-5
    virtual void registerServer(IClassServer*);                  // +0x30 slot 6
    virtual void unregisterServer(IClassServer*);                // +0x38 slot 7
    virtual void setDefaultClass(unsigned int, unsigned int);    // +0x40 slot 8
    virtual void getDefaultClass(unsigned int, unsigned int&);   // +0x48 slot 9
    virtual void getClassName(unsigned int, std::string&);       // +0x50 slot 10
    virtual void getClassID(std::string const&, unsigned int&);  // +0x58 slot 11
    virtual void createInstance(unsigned int, IBase*);           // +0x60 slot 12
    virtual void createInstance(unsigned int, unsigned int, IBase*); // +0x68 slot 13
    virtual void createInstance(std::string, unsigned int, IBase*);  // +0x70 slot 14
    virtual void setSingletonClass(std::string const&, unsigned int); // +0x78 slot 15
    virtual void getSingletonClass(std::string const&, unsigned int&); // +0x80 slot 16
    virtual void registerSingleton(SingletonRegInfo const&);     // +0x88 slot 17
    virtual void unregisterSingleton(std::string const&);        // +0x90 slot 18
    virtual void getSingleton(std::string const&);               // +0x98 slot 19

    char _pad[0x68];
    std::vector<ClassInfo> m_classes; // +0x70

    void findServer(IClassServer* server);
    void removeServer(IClassServer* server);
};

class IClassServer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void getClasses(std::vector<ClassManager::ServerClass>& out);   // +0x20 slot 4
    virtual void getSingletons(std::vector<ClassManager::SingletonRegInfo>& out); // +0x28 slot 5
};

void ClassManager::unregisterServer(IClassServer* server)
{
    findServer(server);

    std::vector<SingletonRegInfo> singletons;
    server->getSingletons(singletons);
    for (std::vector<SingletonRegInfo>::reverse_iterator it = singletons.rbegin(); it != singletons.rend(); ++it) {
        unregisterSingleton(it->name);
    }

    std::vector<ServerClass> classes;
    server->getClasses(classes);
    for (std::vector<ServerClass>::reverse_iterator ct = classes.rbegin(); ct != classes.rend(); ++ct) {
        m_classes.erase(std::find(m_classes.begin(), m_classes.end(), ct->className));
    }

    removeServer(server);
}

} }

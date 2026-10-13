// FUNCTION: BF2 0x745180
#include <string>
namespace dice { namespace hfe {

class IBase;

struct SingletonInfo {
    SingletonInfo(const std::string& n, void* p, int a, int b, int c) : name(n), ptr(p), a(a), b(b), c(c) {}
    std::string name;
    void* ptr;
    int a;
    int b;
    int c;
};

class IClassManager {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void c10();
    virtual void c11();
    virtual void c12();
    virtual void c13();
    virtual void c14();
    virtual void c15();
    virtual void c16();
    virtual void registerSingleton(const SingletonInfo& info);   // 0x88
};
extern IClassManager* classManager;

class SettingsRepostitory;
extern SettingsRepostitory* settings;

class ISettingsRepostitory {
public:
    static void createSingleton();
};

class SettingsRepostitory : public ISettingsRepostitory {
public:
    SettingsRepostitory();
    char _pad[0x198];
};

void ISettingsRepostitory::createSingleton()
{
    settings = new SettingsRepostitory();
    classManager->registerSingleton(SingletonInfo(std::string("SettingsRepostitory"), &settings, 0, 0, 4));
}

} }

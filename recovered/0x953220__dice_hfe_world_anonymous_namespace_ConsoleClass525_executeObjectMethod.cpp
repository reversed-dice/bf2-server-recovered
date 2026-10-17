// FUNCTION: BF2 0x953220
#include <string>
namespace dice { namespace hfe {
namespace world {
extern unsigned int CID_TargetCompTemplate;
extern unsigned int IID_IWeaponTargetCompTemplate;
void* getActiveTemplateComponent(unsigned int, unsigned int);
class TargetCompTemplate {
public:
    void setOnLockChangeToWeapon(bool, std::string);
};
namespace {
class ConsoleClass525 {
public:
    virtual ~ConsoleClass525();
    virtual void* executeObjectMethod();
    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    bool* m_argv0;
    std::string* m_argv1;
    char _pad3[0xc0];
    char m_active;
};
static inline TargetCompTemplate* targetComp() {
    return (TargetCompTemplate*)getActiveTemplateComponent(IID_IWeaponTargetCompTemplate, CID_TargetCompTemplate);
}
void* ConsoleClass525::executeObjectMethod() {
    if (m_argc == 2) {
        bool b = *m_argv0;
        std::string s(*m_argv1);
        m_active = 0;
        targetComp()->setOnLockChangeToWeapon(b, s);
    }
    return 0;
}
} } } }

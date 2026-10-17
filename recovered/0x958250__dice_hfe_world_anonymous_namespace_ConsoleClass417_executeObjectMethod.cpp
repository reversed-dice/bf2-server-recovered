// FUNCTION: BF2 0x958250
#include <string>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_IID_IWeaponAmmoCompTemplate;
extern "C" unsigned dice_hfe_world_CID_AmmoCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);
struct WeaponAmmoComp { char _pad0[0x50]; std::string name; };
namespace {
class ConsoleClass417 {
public:
    virtual ~ConsoleClass417();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    char pad1[4];
    std::string* m_arg;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[7];
    std::string m_result;
};
static inline WeaponAmmoComp* comp() {
    return (WeaponAmmoComp*)dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IWeaponAmmoCompTemplate, dice_hfe_world_CID_AmmoCompTemplate);
}
static inline void setName(std::string v) { comp()->name.assign(v); }
void* ConsoleClass417::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_result.assign(std::string(comp()->name));
        return &m_result;
    }
    if (m_argc == 1) {
        std::string s(*m_arg);
        m_active = 0;
        setName(s);
    }
    return 0;
}
}
} }

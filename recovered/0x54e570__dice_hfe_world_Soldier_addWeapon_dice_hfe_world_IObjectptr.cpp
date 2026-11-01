// FUNCTION: BF2 0x54e570
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <ostream>
#include <vector>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

namespace io {
enum PlayerInputMap { PlayerInputMap_0 };
std::ostream& operator<<(std::ostream& os, PlayerInputMap v);
}

namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    char _pad[0x20];
    IObject* m_template;
};

extern void* gameLogic;
extern unsigned int IID_IWeaponObject;
extern unsigned int IID_IItemTemplate;

typedef unsigned int (*FnU)(void*);
typedef void* (*FnP)(void*);
typedef void* (*FnPUU)(void*, unsigned int, unsigned int);

struct Debug_54e570 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_54e570(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_54e570();
};

class Soldier {
public:
    void addWeapon(IObject* weapon);

    char _pad[0x298];
    std::vector<IObject*> m_298;   // 0x298
    std::vector<IObject*> m_2b0;   // 0x2b0
    std::vector<IObject*> m_2c8;   // 0x2c8
    std::vector<IObject*> m_2e0;   // 0x2e0
    char _pad3[0x318 - 0x2f8];
    IObject* m_318;                // 0x318
    char _pad2[0x378 - 0x320];
    void* m_378;                   // 0x378
};

static inline void* getPC(void* self)
{
    return ((FnP)(*(void***)self)[0x300 / 8])(self);
}

static inline unsigned int slot1d0(void* o) { return ((FnU)(*(void***)o)[0x1d0 / 8])(o); }
static inline unsigned int slot2e0(void* o) { return ((FnU)(*(void***)o)[0x2e0 / 8])(o); }
static inline int slot70(void* o) { return (int)((FnU)(*(void***)o)[0x70 / 8])(o); }
static inline int slot28(void* o) { return (int)((FnU)(*(void***)o)[0x28 / 8])(o); }

void Soldier::addWeapon(IObject* weapon)
{
    m_298.push_back(weapon);

    if (weapon == 0)
        return;

    IObject* w = (IObject*)weapon->queryInterface(IID_IWeaponObject);
    if (w == 0)
        return;

    if (slot70(w) == 8) {
        m_2b0.push_back(weapon);
        if (m_378 == 0)
            return;
        if (getPC(this) != 0) {
            void* r = ((FnPUU)(*(void***)gameLogic)[0x288 / 8])(gameLogic,
                          slot1d0(getPC(this)), slot2e0(getPC(this)));
            IObject* t = (IObject*)weapon->m_template->queryInterface(IID_IItemTemplate);
            if (r == 0)
                return;
            if (slot28(t) != *(int*)((char*)r + 0x22c))
                return;
        }
        m_318 = weapon;
    } else if (slot70(w) == 0x1f) {
        m_2c8.push_back(weapon);
    } else if (slot70(w) == 0x2f) {
        m_2e0.push_back(weapon);
    } else {
        io::PlayerInputMap button = (io::PlayerInputMap)slot70(w);
        Debug_54e570(6, std::string("Game/Objects/Game/Soldier.cpp"), 3323,
                     std::string(&DAT_00bb25f1)).os
            << "Unknown weapon fire button for weapon, button : " << button;
    }
}

} } }

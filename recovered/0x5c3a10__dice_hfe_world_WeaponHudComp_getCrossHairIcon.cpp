// FUNCTION: BF2 0x5c3a10
#include <string>

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IWeaponObject;

typedef std::string (*GetIconStringFn)(void*);
typedef void* (*QueryFn)(void*, unsigned int);
typedef char (*BoolFn)(void*);

struct WeaponHudComp {
    char _pad0[0x10];
    void* m_iconSource;        // +0x10
    void* m_object;            // +0x18
    std::string getCrossHairIcon();
};

std::string WeaponHudComp::getCrossHairIcon()
{
    void* o = m_object;
    if (o != 0) {
        void* w = ((QueryFn)(*(void***)o)[0x18 / 8])(o, IID_IWeaponObject);
        if (w != 0) {
            if (((BoolFn)(*(void***)w)[0x38 / 8])(w) != 0) {
                if (((GetIconStringFn)(*(void***)m_iconSource)[0x110 / 8])(m_iconSource).size() != 0)
                    return ((GetIconStringFn)(*(void***)m_iconSource)[0x110 / 8])(m_iconSource);
            }
        }
    }
    return ((GetIconStringFn)(*(void***)m_iconSource)[0xf0 / 8])(m_iconSource);
}

} } }

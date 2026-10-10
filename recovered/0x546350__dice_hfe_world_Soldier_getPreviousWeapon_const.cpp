// FUNCTION: BF2 0x546350
namespace dice { namespace hfe { namespace world {

class IObject;

class Soldier {
public:
    char _pad[0x310];
    IObject* m_previousWeapon;
    IObject* m_otherWeapon;

    IObject* getPreviousWeapon() const;
};

IObject* Soldier::getPreviousWeapon() const {
    IObject* w = m_previousWeapon;
    if (w != 0 && ((bool (*)(void*))(*(void***)w)[0x538 / 8])(w)) {
        return m_previousWeapon;
    }
    return m_otherWeapon;
}

} } }

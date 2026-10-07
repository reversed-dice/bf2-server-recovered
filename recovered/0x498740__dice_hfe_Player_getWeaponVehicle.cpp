// FUNCTION: BF2 0x498740
#include <vector>

namespace dice {
namespace hfe {
namespace world {

extern int IID_IPlayerControlObject;

class IPlayerControlObject {
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual std::vector<void*>& getWeapons(); // slot 0xd8 = 27 * 8
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(int iid); // slot 0x18
    char pad[0x50 - 8];
    IObject* m_parent;
};

} // namespace world

class Player {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual void v68();
    virtual void v70();
    virtual void v78();
    virtual void v80();
    virtual void v88();
    virtual world::IObject* getVehicle(); // slot 0x90
    virtual void v98();
    virtual void va0();
    virtual void va8();
    virtual void vb0();
    virtual void vb8();
    virtual void vc0();
    virtual void vc8();
    virtual void vd0();
    virtual void vd8();
    virtual void ve0();
    virtual void ve8();
    virtual void vf0();
    virtual void vf8();
    virtual void v100();
    virtual void v108();
    virtual void v110();
    virtual void v118();
    virtual void v120();
    virtual void v128();
    virtual void v130();
    virtual void v138();
    virtual void v140();
    virtual world::IObject* getSoldier(); // slot 0x148

    world::IPlayerControlObject* getWeaponVehicle();
};

world::IPlayerControlObject* Player::getWeaponVehicle()
{
    world::IObject* obj = getVehicle();
    while (obj) {
        world::IPlayerControlObject* pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
        if (pco) {
            std::vector<void*>& weapons = pco->getWeapons();
            if (!weapons.empty())
                return pco;
            break;
        }
        obj = obj->m_parent;
    }

    obj = getSoldier();
    while (obj) {
        world::IPlayerControlObject* pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
        if (pco) {
            std::vector<void*>& weapons = pco->getWeapons();
            if (!weapons.empty())
                return pco;
            return 0;
        }
        obj = obj->m_parent;
    }

    return 0;
}

} // namespace hfe
} // namespace dice

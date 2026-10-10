// FUNCTION: BF2 0x791bf0
namespace dice { namespace hfe {
namespace world {
    class IObject {};
    extern unsigned int IID_IObject;

    class GenericFireArm {
    public:
        void setTargetObject(IObject* target);
    };

    class IWeapon {
    public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);

    };
}

class GameLogic {
public:
    virtual void gl0();
    virtual void gl1();
    virtual void gl2();
    virtual void gl3();
    virtual void gl4();
    virtual void gl5();
    virtual void gl6();
    virtual void gl7();
    virtual void gl8();
    virtual void gl9();
    virtual void gl10();
    virtual void gl11();
    virtual void gl12();
    virtual void gl13();
    virtual void gl14();
    virtual void gl15();
    virtual void gl16();
    virtual void gl17();
    virtual void gl18();
    virtual void gl19();
    virtual void gl20();
    virtual void gl21();
    virtual void gl22();
    virtual void gl23();
    virtual void gl24();
    virtual void gl25();
    virtual void gl26();
    virtual void gl27();
    virtual void gl28();
    virtual void gl29();
    virtual void gl30();
    virtual void gl31();
    virtual void gl32();
    virtual void gl33();
    virtual void gl34();
    virtual void gl35();
    virtual void gl36();
    virtual void gl37();
    virtual void gl38();
    virtual void gl39();
    virtual void gl40();
    virtual void gl41();
    virtual void gl42();
    virtual void gl43();
    virtual void gl44();
    virtual void gl45();
    virtual void gl46();
    virtual void gl47();
    virtual void gl48();
    virtual void gl49();
    virtual void gl50();
    virtual void gl51();
    virtual void gl52();
    virtual void gl53();
    virtual void gl54();
    virtual void gl55();
    virtual void gl56();
    virtual void gl57();
    virtual void gl58();
    virtual void gl59();
    virtual void gl60();
    virtual void gl61();
    virtual void gl62();
    virtual void gl63();
    virtual void gl64();
    virtual void gl65();
    virtual void gl66();
    virtual void gl67();
    virtual void gl68();
    virtual void gl69();
    virtual void gl70();
    virtual void gl71();
    virtual void gl72();
    virtual void gl73();
    virtual void gl74();
    virtual void gl75();
    virtual void gl76();
    virtual void gl77();
    virtual void gl78();
    virtual void gl79();
    virtual void gl80();
    virtual void gl81();
    virtual void gl82();
    virtual void gl83();
    virtual void gl84();
    virtual void gl85();
    virtual void gl86();
    virtual void gl87();
    virtual void gl88();
    virtual void gl89();
    virtual void gl90();
    virtual void gl91();
    virtual void gl92();
    virtual void gl93();
    virtual void gl94();
    virtual void gl95();
    virtual void gl96();
    virtual void gl97();
    virtual void gl98();
    virtual void gl99();
    virtual void gl100();
    virtual void gl101();
    virtual void gl102();
    virtual void gl103();
    virtual void gl104();
    virtual void gl105();
    virtual void gl106();
    virtual void gl107();
    virtual void gl108();
    virtual void gl109();
    virtual dice::hfe::world::IObject* getObjectById(unsigned int id);

};

extern GameLogic* gameLogic;

namespace ai {

class WeaponObject {
public:
    char _pad[0x10];
    world::IWeapon* m_weapon;

    bool setTarget(unsigned int targetId);
};

bool WeaponObject::setTarget(unsigned int targetId) {
    if (m_weapon->queryInterface(world::IID_IObject)) {
        world::IObject* obj = gameLogic->getObjectById(targetId);
        if (obj) {
            world::GenericFireArm* gfa = 0;
            if (m_weapon) {
                gfa = (world::GenericFireArm*)((char*)m_weapon - 0x270);
            }
            gfa->setTargetObject(obj);
            return true;
        }
    }
    return false;
}

} } }

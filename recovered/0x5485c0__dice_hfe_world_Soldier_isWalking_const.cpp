// FUNCTION: BF2 0x5485c0

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IWeaponObject;

class IWeaponObject {
public:
    virtual ~IWeaponObject();
    virtual void wd0();
    virtual void wd1();
    virtual void wd2();
    virtual void wd3();
    virtual void wd4();
    virtual void wd5();
    virtual void wd6();
    virtual void wd7();
    virtual void wd8();
    virtual void wd9();
    virtual void wd10();
    virtual void wd11();
    virtual void wd12();
    virtual void wd13();
    virtual void wd14();
    virtual void wd15();
    virtual void wd16();
    virtual void wd17();
    virtual void wd18();
    virtual void wd19();
    virtual void wd20();
    virtual void wd21();
    virtual void wd22();
    virtual void wd23();
    virtual void wd24();
    virtual void wd25();
    virtual void wd26();
    virtual void wd27();
    virtual void wd28();
    virtual void wd29();
    virtual void wd30();
    virtual void wd31();
    virtual void wd32();
    virtual void wd33();
    virtual void wd34();
    virtual void wd35();
    virtual void wd36();
    virtual void wd37();
    virtual void wd38();
    virtual void wd39();
    virtual void wd40();
    virtual void wd41();
    virtual void wd42();
    virtual void wd43();
    virtual void wd44();
    virtual void wd45();
    virtual void wd46();
    virtual void wd47();
    virtual void wd48();
    virtual void wd49();
    virtual void wd50();
    virtual void wd51();
    virtual void wd52();
    virtual void wd53();
    virtual void wd54();
    virtual void wd55();
    virtual void wd56();
    virtual void wd57();
    virtual void wd58();
    virtual void wd59();
    virtual void wd60();
    virtual void wd61();
    virtual void wd62();
    virtual void wd63();
    virtual int isWalking() const;
};

class IObject {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void* queryInterface(unsigned int);
};

class Soldier {
public:
    virtual ~Soldier();
    virtual void sd0();
    virtual void sd1();
    virtual void sd2();
    virtual void sd3();
    virtual void sd4();
    virtual void sd5();
    virtual void sd6();
    virtual void sd7();
    virtual void sd8();
    virtual void sd9();
    virtual void sd10();
    virtual void sd11();
    virtual void sd12();
    virtual void sd13();
    virtual void sd14();
    virtual void sd15();
    virtual void sd16();
    virtual void sd17();
    virtual void sd18();
    virtual void sd19();
    virtual void sd20();
    virtual void sd21();
    virtual void sd22();
    virtual void sd23();
    virtual void sd24();
    virtual void sd25();
    virtual void sd26();
    virtual void sd27();
    virtual void sd28();
    virtual void sd29();
    virtual void sd30();
    virtual void sd31();
    virtual void sd32();
    virtual void sd33();
    virtual void sd34();
    virtual void sd35();
    virtual void sd36();
    virtual void sd37();
    virtual void sd38();
    virtual void sd39();
    virtual void sd40();
    virtual void sd41();
    virtual void sd42();
    virtual void sd43();
    virtual void sd44();
    virtual void sd45();
    virtual void sd46();
    virtual void sd47();
    virtual void sd48();
    virtual void sd49();
    virtual void sd50();
    virtual void sd51();
    virtual void sd52();
    virtual void sd53();
    virtual void sd54();
    virtual void sd55();
    virtual void sd56();
    virtual void sd57();
    virtual void sd58();
    virtual void sd59();
    virtual void sd60();
    virtual void sd61();
    virtual void sd62();
    virtual void sd63();
    virtual void sd64();
    virtual void sd65();
    virtual void sd66();
    virtual void sd67();
    virtual void sd68();
    virtual void sd69();
    virtual void sd70();
    virtual void sd71();
    virtual void sd72();
    virtual void sd73();
    virtual void sd74();
    virtual void sd75();
    virtual void sd76();
    virtual void sd77();
    virtual void sd78();
    virtual void sd79();
    virtual void sd80();
    virtual void sd81();
    virtual void sd82();
    virtual void sd83();
    virtual void sd84();
    virtual void sd85();
    virtual void sd86();
    virtual void sd87();
    virtual void sd88();
    virtual void sd89();
    virtual void sd90();
    virtual void sd91();
    virtual void sd92();
    virtual void sd93();
    virtual void sd94();
    virtual void sd95();
    virtual void sd96();
    virtual void sd97();
    virtual void sd98();
    virtual void sd99();
    virtual void sd100();
    virtual void sd101();
    virtual void sd102();
    virtual void sd103();
    virtual void sd104();
    virtual void sd105();
    virtual void sd106();
    virtual void sd107();
    virtual void sd108();
    virtual void sd109();
    virtual void sd110();
    virtual void sd111();
    virtual void sd112();
    virtual IObject* getItem(int) const;

    bool isWalking() const;
};

bool Soldier::isWalking() const {
    if (getItem(0)) {
        IObject* obj = getItem(0);
        IWeaponObject* w = obj ? (IWeaponObject*)obj->queryInterface(IID_IWeaponObject) : 0;
        if (w->isWalking())
            return true;
    }
    return false;
}

} } }

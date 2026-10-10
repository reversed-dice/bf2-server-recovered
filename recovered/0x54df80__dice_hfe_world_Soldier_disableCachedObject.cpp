// FUNCTION: BF2 0x54df80
// BF2_FLAGS: -fcrossjumping
extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe { namespace world {

class IObject {};

void reenablePhysicsOnSoldier(IObject*);

class SimpleObject : public IObject {
public:
    virtual void v_0();
    virtual void v_1();
    virtual void v_2();
    virtual void v_3();
    virtual void v_4();
    virtual void v_5();
    virtual void v_6();
    virtual void v_7();
    virtual void v_8();
    virtual void disableCachedObject();
};

class Soldier : public SimpleObject {
public:
    virtual void v_0();
    virtual void v_1();
    virtual void v_2();
    virtual void v_3();
    virtual void v_4();
    virtual void v_5();
    virtual void v_6();
    virtual void v_7();
    virtual void v_8();
    virtual void v_9();
    virtual void v_10();
    virtual void v_11();
    virtual void v_12();
    virtual void v_13();
    virtual void v_14();
    virtual void v_15();
    virtual void v_16();
    virtual void v_17();
    virtual void v_18();
    virtual void v_19();
    virtual void v_20();
    virtual void v_21();
    virtual void v_22();
    virtual void v_23();
    virtual void v_24();
    virtual void v_25();
    virtual void v_26();
    virtual void v_27();
    virtual void v_28();
    virtual void v_29();
    virtual void v_30();
    virtual void v_31();
    virtual void v_32();
    virtual void v_33();
    virtual void v_34();
    virtual void v_35();
    virtual void v_36();
    virtual void v_37();
    virtual void v_38();
    virtual void v_39();
    virtual void v_40();
    virtual void v_41();
    virtual void v_42();
    virtual void v_43();
    virtual void v_44();
    virtual void v_45();
    virtual void v_46();
    virtual void v_47();
    virtual void v_48();
    virtual void v_49();
    virtual void v_50();
    virtual void v_51();
    virtual void v_52();
    virtual void v_53();
    virtual void v_54();
    virtual void v_55();
    virtual void v_56();
    virtual void v_57();
    virtual void v_58();
    virtual void v_59();
    virtual void v_60();
    virtual void v_61();
    virtual void v_62();
    virtual void v_63();
    virtual void v_64();
    virtual void v_65();
    virtual void v_66();
    virtual void v_67();
    virtual void v_68();
    virtual void v_69();
    virtual void v_70();
    virtual void v_71();
    virtual void v_72();
    virtual void v_73();
    virtual void v_74();
    virtual void v_75();
    virtual void v_76();
    virtual void v_77();
    virtual void v_78();
    virtual void v_79();
    virtual void v_80();
    virtual void v_81();
    virtual void v_82();
    virtual void v_83();
    virtual void v_84();
    virtual void v_85();
    virtual void v_86();
    virtual void v_87();
    virtual void v_88();
    virtual void v_89();
    virtual void v_90();
    virtual void v_91();
    virtual void v_92();
    virtual void v_93();
    virtual void v_94();
    virtual void v_95();
    virtual void v_96();
    virtual void v_97();
    virtual void v_98();
    virtual void v_99();
    virtual void v_100();
    virtual void v_101();
    virtual void v_102();
    virtual void v_103();
    virtual void v_104();
    virtual void v_105();
    virtual void v_106();
    virtual void v_107();
    virtual void v_108();
    virtual void v_109();
    virtual void v_110();
    virtual void v_111();
    virtual void v_112();
    virtual void v_113();
    virtual void v_114();
    virtual void v_115();
    virtual void* getVehicle() const; // slot 0x3a8

    void dropKit();
    void resetInstance();

    virtual void disableCachedObject();

    char _pad[0x370 - sizeof(SimpleObject)];
    void* m_kit; // at 0x370
};

void Soldier::disableCachedObject() {
    if (getVehicle() != 0) abort();
    dropKit();
    if (m_kit != 0) abort();
    resetInstance();
    reenablePhysicsOnSoldier(this);
    SimpleObject::disableCachedObject();
}

} } }

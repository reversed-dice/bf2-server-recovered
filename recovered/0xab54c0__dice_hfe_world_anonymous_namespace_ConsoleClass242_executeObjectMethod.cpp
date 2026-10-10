// FUNCTION: BF2 0xab54c0
namespace dice { namespace hfe { namespace world {

extern unsigned int CID_LightSource;

class IObject {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual unsigned int getClassID(); // slot 4 (0x20)
    virtual void d_5();
    virtual void d_6();
    virtual void d_7();
    virtual void d_8();
    virtual void d_9();
    virtual void d_10();
    virtual void d_11();
    virtual void d_12();
    virtual void d_13();
    virtual void d_14();
    virtual void d_15();
    virtual void d_16();
    virtual void d_17();
    virtual void d_18();
    virtual void d_19();
    virtual void d_20();
    virtual void d_21();
    virtual void d_22();
    virtual void d_23();
    virtual void d_24();
    virtual void d_25();
    virtual void d_26();
    virtual void d_27();
    virtual void d_28();
    virtual void d_29();
    virtual void d_30();
    virtual void d_31();
    virtual void d_32();
    virtual void d_33();
    virtual void d_34();
    virtual void d_35();
    virtual void d_36();
    virtual void d_37();
    virtual void d_38();
    virtual void d_39();
    virtual void d_40();
    virtual void d_41();
    virtual void d_42();
    virtual void d_43();
    virtual void d_44();
    virtual void d_45();
    virtual void d_46();
    virtual void d_47();
    virtual void d_48();
    virtual void d_49();
    virtual void d_50();
    virtual void d_51();
    virtual void d_52();
    virtual void d_53();
    virtual void d_54();
    virtual void d_55();
    virtual void d_56();
    virtual void d_57();
    virtual void d_58();
    virtual void d_59();
    virtual void d_60();
    virtual void d_61();
    virtual void d_62();
    virtual void d_63();
    virtual void d_64();
    virtual void d_65();
    virtual void d_66();
    virtual void d_67();
    virtual void d_68();
    virtual void d_69();
    virtual void d_70();
    virtual void d_71();
    virtual void d_72();
    virtual void d_73();
    virtual void d_74();
    virtual void d_75();
    virtual void d_76();
    virtual void d_77();
    virtual void d_78();
    virtual void d_79();
    virtual void d_80();
    virtual void d_81();
    virtual void d_82();
    virtual void d_83();
    virtual void d_84();
    virtual void d_85();
    virtual void d_86();
    virtual void d_87();
    virtual void d_88();
    virtual void d_89();
    virtual void d_90();
    virtual void d_91();
    virtual void d_92();
    virtual void d_93();
    virtual void d_94();
    virtual void d_95();
    virtual void d_96();
    virtual void d_97();
    virtual void d_98();
    virtual void d_99();
    virtual void d_100();
    virtual void d_101();
    virtual void d_102();
    virtual void d_103();
    virtual void d_104();
    virtual void d_105();
    virtual void d_106();
    virtual void d_107();
    virtual void d_108();
    virtual void d_109();
    virtual void d_110();
    virtual void d_111();
    virtual void d_112();
    virtual void d_113();
    virtual void d_114();
    virtual void d_115();
    virtual void d_116();
    virtual void d_117();
    virtual void d_118();
    virtual void d_119();
    virtual void d_120();
    virtual void d_121();
    virtual void d_122();
    virtual void slot123(); // slot 123 (0x3d8)
};

class ObjectManager {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27();
    virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31();
    virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual IObject* getActiveObject(); // slot 0x120 (36)
};

extern ObjectManager* objectManager;

namespace {
class ConsoleClass242 {
public:
    char _pad[0x30];
    int m_argc;
    char _pad2[0x108 - 0x34];
    char m_active;

    void* executeObjectMethod();
};


void* ConsoleClass242::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_active = 0;
    IObject* obj = objectManager->getActiveObject();
    IObject* target = 0;
    if (obj && obj->getClassID() == CID_LightSource) {
        target = obj;
    }
    target->slot123();
    return 0;
}
}

} } }

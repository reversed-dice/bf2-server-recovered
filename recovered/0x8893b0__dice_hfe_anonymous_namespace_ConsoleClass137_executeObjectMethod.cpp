// FUNCTION: BF2 0x8893b0
#include <string>

namespace dice { namespace hfe {

struct Settings {
    virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
    virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7();
    virtual void slot8(); virtual void slot9(); virtual void slot10(); virtual void slot11();
    virtual void slot12(); virtual void slot13(); virtual void slot14(); virtual void slot15();
    virtual void slot16(); virtual void slot17(); virtual void slot18(); virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

class ServerGameLogic {
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
    virtual void v_116();
    virtual void v_117();
    virtual void v_118();
    virtual void v_119();
    virtual void v_120();
    virtual void v_121();
    virtual void v_122();
    virtual void v_123();
    virtual void v_124();
    virtual void v_125();
    virtual void v_126();
    virtual void v_127();
    virtual void v_128();
    virtual void v_129();
    virtual void v_130();
    virtual void v_131();
    virtual void v_132();
    virtual void v_133();
    virtual void targetMethod();
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {

class ConsoleClass137 {
public:
    virtual ~ConsoleClass137();
    virtual void* executeObjectMethod();
    void* px0();    void* px1();    void* px2();    void* px3();    void* px4();    void* px5();    void* px6();    void* px7();    void* px8();    void* px9();    void* px10();    void* px11();    void* px12();
    char pad[0x28];
    int m_argc;
    char pad2[0x108 - 0x34];
    char m_active;
};

void* ConsoleClass137::px0() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->targetMethod();
    return 0;
}
void* ConsoleClass137::px1() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->targetMethod();
    return 0;
}
void* ConsoleClass137::px2() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->targetMethod();
    return 0;
}
void* ConsoleClass137::px3() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->targetMethod();
    return 0;
}
void* ConsoleClass137::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->targetMethod();
    return 0;
}

} // anon
} }

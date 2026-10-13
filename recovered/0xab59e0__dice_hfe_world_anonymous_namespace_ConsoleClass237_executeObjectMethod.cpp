// FUNCTION: BF2 0xab59e0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

using dice::hfe::Vec3;

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
    virtual void setPos(Vec3 const&); // slot 103 (0x338)
    virtual Vec3 const* getPos(); // slot 104 (0x340)
};

class ObjectManager {
public:
    virtual void d0();
    virtual void d_1();
    virtual void d_2();
    virtual void d_3();
    virtual void d_4();
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
    virtual IObject* getActiveObject(); // slot 36 (0x120)
};

extern ObjectManager* objectManager;

namespace {
class ConsoleClass237 {
public:
    virtual ~ConsoleClass237();
    virtual void* executeObjectMethod();
    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    Vec3* m_argv;
    char _pad3[0xc8];
    char m_active;
    char _pad4[3];
    Vec3 m_val;
};

void* ConsoleClass237::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        IObject* obj = objectManager->getActiveObject();
        IObject* target = 0;
        if (obj && obj->getClassID() == CID_LightSource) {
            target = obj;
        }
                Vec3 const* pt = target->getPos();
        float dz = pt->z;
        float dy = pt->y;
        float dx = pt->x;
        float* d = &m_val.x;
        d[0] = dx;
        d[1] = dy;
        d[2] = dz;
        return &m_val;
    }
    if (m_argc == 1) {
        Vec3 v = *m_argv;
        m_active = 0;
        IObject* obj = objectManager->getActiveObject();
        IObject* target = 0;
        if (obj && obj->getClassID() == CID_LightSource) {
            target = obj;
        }
        target->setPos(v);
        return 0;
    }
    return 0;
}
} // anon

} } }

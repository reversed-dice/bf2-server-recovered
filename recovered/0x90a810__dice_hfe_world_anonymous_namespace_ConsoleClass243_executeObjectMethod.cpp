// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x90a810
namespace dice { namespace hfe { namespace world {
extern void* objectManager;
extern const unsigned int CID_ObjectSpawnerTemplate;
struct Vec3 { float x, y, z; void set(float ax, float ay, float az) { x = ax; y = ay; z = az; } Vec3() {} Vec3(const Vec3& o) { set(o.x, o.y, o.z); } Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; } };
class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
};
class ObjectManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void* getObject();
};
class ObjectSpawnerTemplate {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual void s27();
    virtual void s28();
    virtual void s29();
    virtual void s30();
    virtual void s31();
    virtual void s32();
    virtual void s33();
    virtual void s34();
    virtual void s35();
    virtual void s36();
    virtual void s37();
    virtual void s38();
    virtual void s39();
    virtual void s40();
    virtual void s41();
    virtual void s42();
    virtual void s43();
    virtual void s44();
    virtual void s45();
    virtual void s46();
    virtual void s47();
    virtual void s48();
    virtual void s49();
    virtual void s50();
    virtual void s51();
    virtual void s52();
    virtual void s53();
    virtual void s54();
    virtual void s55();
    virtual void s56();
    virtual void s57();
    virtual void s58();
    virtual void s59();
    virtual void s60();
    virtual void s61();
    virtual void s62();
    virtual void s63();
    virtual void s64();
    virtual void s65();
    virtual void s66();
    virtual void s67();
    virtual void s68();
    virtual void s69();
    virtual void s70();
    virtual void s71();
    virtual void s72();
    virtual void s73();
    virtual void s74();
    virtual void s75();
    virtual void s76();
    virtual void s77();
    virtual void s78();
    virtual void s79();
    virtual void s80();
    virtual void s81();
    virtual void s82();
    virtual void s83();
    virtual void s84();
    virtual void s85();
    virtual void s86();
    virtual void s87();
    virtual void s88();
    virtual void s89();
    virtual void s90();
    virtual void s91();
    virtual void s92();
    virtual void s93();
    virtual void s94();
    virtual void s95();
    virtual void s96();
    virtual void s97();
    virtual void s98();
    virtual void s99();
    virtual void s100();
    virtual void s101();
    virtual void s102();
    virtual void s103();
    virtual void s104();
    virtual void s105();
    virtual void s106();
    virtual void s107();
    virtual void setPosition(Vec3 v);
    virtual Vec3 getPosition();
};
namespace {
class ConsoleClass243 {
public:
    virtual ~ConsoleClass243();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    char pad1[4];
    Vec3* m_arg;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[3];
    Vec3 m_val;
};
static inline ObjectSpawnerTemplate* spawner() {
    void* o = ((void* (*)(void*))(*(void***)objectManager)[0x120 / 8])(objectManager);
    void* s = o != 0 ? *(void**)((char*)o + 0x28) : 0;
    return (s != 0 && ((unsigned int (*)(void*))(*(void***)s)[0x20 / 8])(s) == CID_ObjectSpawnerTemplate) ? (ObjectSpawnerTemplate*)o : 0;
}
void* ConsoleClass243::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_val = spawner()->getPosition();
        return &m_val;
    }
    if (m_argc == 1) {
        Vec3 v = *m_arg;
        m_active = 0;
        spawner()->setPosition(v);
    }
    return 0;
}
} } } }

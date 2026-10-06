// FUNCTION: BF2 0x9009a0
namespace dice { namespace hfe { namespace world {

class IObject;

class ObjectPredicator {
public:
    virtual bool predicate(IObject* obj);
};

class MobileTarget {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual void _m21();
    virtual void _m22();
    virtual void _m23();
    virtual void _m24();
    virtual void _m25();
    virtual void _m26();
    virtual void _m27();
    virtual void _m28();
    virtual void _m29();
    virtual void _m30();
    virtual void _m31();
    virtual void _m32();
    virtual void _m33();
    virtual void _m34();
    virtual void _m35();
    virtual void _m36();
    virtual void _m37();
    virtual void _m38();
    virtual void _m39();
    virtual void _m40();
    virtual void _m41();
    virtual void _m42();
    virtual void _m43();
    virtual void _m44();
    virtual void _m45();
    virtual void _m46();
    virtual void _m47();
    virtual void _m48();
    virtual void _m49();
    virtual void _m50();
    virtual void _m51();
    virtual void _m52();
    virtual void _m53();
    virtual void _m54();
    virtual void _m55();
    virtual void _m56();
    virtual void _m57();
    virtual void _m58();
    virtual void _m59();
    virtual void _m60();
    virtual void _m61();
    virtual void _m62();
    virtual void _m63();
    virtual void _m64();
    virtual void _m65();
    virtual void _m66();
    virtual void _m67();
    virtual void _m68();
    virtual void _m69();
    virtual void _m70();
    virtual void _m71();
    virtual void _m72();
    virtual void _m73();
    virtual void _m74();
    virtual void _m75();
    virtual void _m76();
    virtual bool isMobile(); // slot 77 = 0x268
};

struct ObjectWithMobile {
    char _pad[0x80];
    void* m_ptr80;
    MobileTarget* m_target;
};

namespace {
class NoMobilePredicate : public ObjectPredicator {
public:
    virtual bool predicate(IObject* obj);
};

bool NoMobilePredicate::predicate(IObject* obj)
{
    ObjectWithMobile* o = (ObjectWithMobile*)obj;
    if (!o->m_ptr80) return false;
    if (o->m_target && o->m_target->isMobile()) return false;
    return true;
}
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_NoMobilePredicate_predicate_dice_hfe_world_IObjectptr (0x9009a0)

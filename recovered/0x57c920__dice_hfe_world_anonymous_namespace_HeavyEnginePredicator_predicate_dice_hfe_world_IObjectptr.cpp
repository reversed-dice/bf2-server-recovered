// FUNCTION: BF2 0x57c920
namespace dice { namespace hfe { namespace world {
extern unsigned int IID_IPlayerControlObject;
class IPlayerControlObject {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual bool isActive();
};
class IComp {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void c10();
    virtual void c11();
    virtual void c12();
    virtual void c13();
    virtual void c14();
    virtual void c15();
    virtual void c16();
    virtual void c17();
    virtual void c18();
    virtual void c19();
    virtual void c20();
    virtual void c21();
    virtual void c22();
    virtual void c23();
    virtual void c24();
    virtual void c25();
    virtual void c26();
    virtual void c27();
    virtual void c28();
    virtual void c29();
    virtual void c30();
    virtual void c31();
    virtual void c32();
    virtual void c33();
    virtual void c34();
    virtual void c35();
    virtual void c36();
    virtual void c37();
    virtual void c38();
    virtual void c39();
    virtual void c40();
    virtual void c41();
    virtual void c42();
    virtual void c43();
    virtual void c44();
    virtual void c45();
    virtual void c46();
    virtual void c47();
    virtual void c48();
    virtual void c49();
    virtual void c50();
    virtual void c51();
    virtual void c52();
    virtual void c53();
    virtual void c54();
    virtual float getValue();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual bool isHeavy();
};
class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual IPlayerControlObject* queryInterface(unsigned int iid);
    char _pad[0x50 - 8];
    IObject* m_parent;
    char _pad2[0x88 - 0x58];
    IComp* m_comp;
};
IObject* getRootParent(const IObject* o);
class ObjectFlagPredicator {
public:
    virtual bool predicate(IObject* obj);
};
namespace {
class HeavyEnginePredicator : public ObjectFlagPredicator {
public:
    virtual bool predicate(IObject* obj);
};
bool HeavyEnginePredicator::predicate(IObject* obj) {
    IObject* root = getRootParent(obj);
    IPlayerControlObject* pc = 0;
    for (IObject* it = root; it; it = it->m_parent) {
        pc = it->queryInterface(IID_IPlayerControlObject);
        if (pc) break;
    }
    IComp* c = root->m_comp;
    if (!c) return false;
    if (!c->isHeavy()) return false;
    if (!(c->getValue() >= 2000.0f)) return false;
    if (!pc) return false;
    if (!pc->isActive()) return false;
    return ObjectFlagPredicator::predicate(obj);
}
}
} } }

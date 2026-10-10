// FUNCTION: BF2 0x6146f0
namespace dice { namespace hfe {

namespace world {
class IObject;
class IPlayer;

class IBundleChild {
public:
    virtual void c0(); virtual void c1(); virtual void c2();
    virtual void* queryInterface(unsigned int iid);
    char _pad[0x50 - 8];
    IBundleChild* next;
};

class IPlayerControlObject {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16();
    virtual IPlayer* getPlayer();
    virtual void setX(unsigned int value);
    virtual void p19(); virtual void p20();
    virtual void setTarget(IObject* target);
};

class IPlayer {
public:
    virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3();
    virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7();
    virtual void q8(); virtual void q9(); virtual void q10();
    virtual unsigned int getValue();
};

class IObject {
public:
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3();
    virtual void o4(); virtual void o5(); virtual void o6(); virtual void o7();
    virtual void o8(); virtual void o9(); virtual void o10();
    virtual unsigned int getValue();
};

extern unsigned int IID_IPlayerControlObject;
}

namespace world {
struct ChildList {
    char _p[8];
    IBundleChild* first;
};

class GenericProjectile {
public:
    virtual void g0();
    void enableProjectileCamera();
    char _p0[0x2a8 - 8];
    ChildList* m_children;
    char _p1[0x338 - 0x2b0];
    IObject* m_target;
    unsigned int m_340;
};

void GenericProjectile::enableProjectileCamera() {
    if (m_target != 0 && m_children != 0) {
        IBundleChild* first = m_children->first;
        if (first == 0) {
            return;
        }
        IBundleChild* c = first;
        {
        do {
            IPlayerControlObject* pc = static_cast<IPlayerControlObject*>(c->queryInterface(IID_IPlayerControlObject));
            if (pc != 0) {
                if (pc->getPlayer() == 0) {
                    return;
                }
                m_340 = pc->getPlayer()->getValue();
                pc->setTarget(m_target);
                pc->setX(m_target->getValue());
                return;
            }
            c = c->next;
        } while (c != 0);
        }
    }
}

} } }

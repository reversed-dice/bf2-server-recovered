// FUNCTION: BF2 0x5a2cb0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPhysicsNode;

class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual void setComponent(unsigned int id, void* c);
    virtual void v23();
    virtual void v24(int a, int b);
};

class PhysicsNode { public: PhysicsNode(); char _pad[0x248]; };
class StaticPhysicsNode { public: StaticPhysicsNode(); char _pad[0x28]; };
class PointPhysicsNode { public: PointPhysicsNode(); char _pad[0xa0]; };
class RotationalPointPhysicsNode { public: RotationalPointPhysicsNode(); char _pad[0xf0]; };

class PhysicsNodeManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void addNode(void* n);
};

extern PhysicsNodeManager* physicsNodeManager;

class ParticleTemplate {
public:
    char _pad0[0x9c];            // 0x00
    int m_type;                  // 0x9c
    char m_a0;                   // 0xa0
    char _pad1[0x0f];            // 0xa1
    float m_dragOffset[3];       // 0xb0
    float m_mass;                // 0xbc
    float m_centerOfMass[3];     // 0xc0
    float m_centerOfColl[3];     // 0xcc
    float m_inertia[3];          // 0xd8
    float m_gravity;             // 0xe4
    unsigned char m_sleepy : 1;  // 0xe8
    char _pad2[3];               // 0xe9
    float m_floater;             // 0xec
    int m_otherLod;              // 0xf0

    void setPhysicsNodeComponent(IObject* obj) const;
};

typedef void (*vfn_v)(void*);
typedef void (*vfn_p)(void*, void*);
typedef void (*vfn_f)(void*, float);
typedef void (*vfn_ii)(void*, int, int);
typedef void (*vfn_i)(void*, int);
typedef void* (*vfn_c)(void*, unsigned int, void*);

void ParticleTemplate::setPhysicsNodeComponent(IObject* obj) const
{
    void* n;
    if (m_a0) {
        switch (m_type) {
        case 1:
            n = new PointPhysicsNode();
            break;
        case 2:
            n = new RotationalPointPhysicsNode();
            break;
        case 3:
            n = new PhysicsNode();
            break;
        case 4:
            n = new PhysicsNode();
            break;
        default:
            n = new PhysicsNode();
            break;
        }
    } else {
        n = new StaticPhysicsNode();
    }
    float mass = m_mass > 0.0f ? m_mass : 0.001f;
    ((vfn_p)(*(void***)n)[10])(n, obj);
    ((vfn_c)(*(void***)obj)[22])(obj, IID_IPhysicsNode, n);
    ((vfn_v)(*(void***)n)[2])(n);
    ((vfn_ii)(*(void***)obj)[24])(obj, 8, 0);
    ((vfn_p)(*(void***)n)[50])(n, (void*)m_dragOffset);
    ((vfn_f)(*(void***)n)[54])(n, mass);
    ((vfn_p)(*(void***)n)[56])(n, (void*)m_centerOfMass);
    ((vfn_p)(*(void***)n)[58])(n, (void*)m_centerOfColl);
    ((vfn_p)(*(void***)n)[60])(n, (void*)m_inertia);
    ((vfn_f)(*(void***)n)[62])(n, m_gravity);
    ((vfn_f)(*(void***)n)[89])(n, m_floater);
    ((vfn_i)(*(void***)n)[73])(n, m_sleepy ? 0 : 100);
    if (m_otherLod != -1)
        ((vfn_i)(*(void***)n)[102])(n, m_otherLod);
    physicsNodeManager->addNode(n);
}

} } }

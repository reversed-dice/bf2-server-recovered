// FUNCTION: BF2 0x69faa0
namespace dice { namespace hfe { namespace world {
extern unsigned int IID_IPhysicsNode;

class IPhysicsNode {
public:
    virtual void v0();
    virtual void v1();
};

class ObjectStub {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void* queryInterface(unsigned int iid, unsigned int p);
    char pad[0x80];
    IPhysicsNode* m_88;
};

class PhysicsNodeManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void removePhysicsNode(IPhysicsNode* n);
};

extern PhysicsNodeManager* physicsNodeManager;

class ObjectTemplate {
public:
    virtual void t0();
    void removePhysicsNodeComponent(ObjectStub* obj);
};

void ObjectTemplate::removePhysicsNodeComponent(ObjectStub* obj)
{
    IPhysicsNode* n = obj->m_88;
    if (!n)
        return;
    if (physicsNodeManager)
        physicsNodeManager->removePhysicsNode(n);
    obj->queryInterface(IID_IPhysicsNode, 0);
}
} } }

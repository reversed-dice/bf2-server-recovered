// FUNCTION: BF2 0x638330
namespace dice { namespace hfe { namespace world {

class IObject {
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
    virtual void v22();
    virtual void v23();
    virtual void updateFlags(unsigned int, unsigned int);
};

class PhysicsNode {
public:
    virtual void n0();
    virtual void n1();
    virtual void n2();
    virtual void n3();
    virtual void n4();
    virtual void n5();
    virtual void n6();
    virtual void n7();
    virtual void n8();
    virtual void n9();
};

class PhysicsSpring : public PhysicsNode {
public:
    void setIsSleepier();
    char _pad0[0x10];
    IObject* m_0x18;
    char _pad1[0x54];
    int m_0x74;
    char _pad2[0x1f8];
    int m_0x270;
};

int* g_forceAwake;

void PhysicsSpring::setIsSleepier() {
    if (*g_forceAwake == 1)
        return;
    int v = m_0x74;
    if (v > 1) {
        m_0x74 = v - 1;
        return;
    }
    if (v == 1) {
        m_0x74 = 0;
        m_0x18->updateFlags(0, 0x800);
        m_0x270 = 0;
    }
}

} } }

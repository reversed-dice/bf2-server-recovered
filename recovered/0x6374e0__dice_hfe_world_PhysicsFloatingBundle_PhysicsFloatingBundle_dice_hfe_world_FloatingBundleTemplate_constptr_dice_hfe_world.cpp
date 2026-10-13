// FUNCTION: BF2 0x6374e0
struct FloatingBundleTemplate;
struct IObject;

class PhysicsNode {
public:
    PhysicsNode();
    virtual void n1();
    virtual void n2();
    virtual void n3();
private:
    char m_pad[0x23c];
};

class PhysicsFloatingBundle : public PhysicsNode {
public:
    PhysicsFloatingBundle(FloatingBundleTemplate const* tpl, IObject const* obj);
    virtual void f1();
private:
    int m_244;
    FloatingBundleTemplate const* m_248;
    float m_250;
    float m_254;
    float m_258;
};

PhysicsFloatingBundle::PhysicsFloatingBundle(FloatingBundleTemplate const* tpl, IObject const* obj)
    : m_244(1), m_248(tpl), m_250(0), m_254(0), m_258(0)
{
}


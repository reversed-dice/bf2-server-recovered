// FUNCTION: BF2 0x641a30
class WindAffector;

class WindManager {
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
    virtual void removeAffector(WindAffector* a);
};

extern WindManager* windManager;

class WindAffector {
public:
    char _pad0[0x20];
    unsigned char m_20;
    float m_24;
    void update(float dt);
};

void WindAffector::update(float dt) {
    if (m_20 && m_24 > 0.0f) {
        m_24 -= dt;
        if (m_24 <= 0.0f) {
            if (windManager) windManager->removeAffector(this);
            m_20 = false;
        }
    }
}

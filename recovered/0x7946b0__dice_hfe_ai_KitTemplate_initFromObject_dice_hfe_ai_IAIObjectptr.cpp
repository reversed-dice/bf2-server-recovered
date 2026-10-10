// FUNCTION: BF2 0x7946b0
namespace dice { namespace hfe { namespace ai {

class ISub {
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
    virtual int getValue(unsigned int idx);
};

class IAIObject {
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
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void* getSomething(int type);
};

class KitTemplate {
public:
    char _pad[0x10];
    int* m_data; // 0x10
    char _pad2[4];
    bool m_flag; // 0x1c

    void initFromObject(IAIObject* obj);
};

void KitTemplate::initFromObject(IAIObject* obj) {
    ISub* sub = (ISub*)obj->getSomething(5);
    for (unsigned int i = 0; i < 6; ++i) {
        m_data[i] = sub->getValue(i);
    }
    m_flag = true;
}

} } }

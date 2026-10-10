// FUNCTION: BF2 0x52e800

namespace dice { namespace hfe { namespace world {

extern unsigned int CID_EngineTemplate;

class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassID();
};

class IObject {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual IObject* getChild() const;

    char _pad[0x28 - 8];
    ITemplate* m_template;
    char _pad2[0x58 - 0x30];
    IObject* m_sibling;
};

void getEngineFromChildsAndSiblings(IObject* obj, IObject*& out) {
    if (!obj) return;
    unsigned int cid = CID_EngineTemplate;
    IObject* cur = obj;
    do {
        if (cur->m_template->getClassID() == cid) {
            out = cur;
            return;
        }
        getEngineFromChildsAndSiblings(cur->m_sibling, out);
        if (out) return;
        cur = cur->getChild();
    } while (cur);
}

} } }

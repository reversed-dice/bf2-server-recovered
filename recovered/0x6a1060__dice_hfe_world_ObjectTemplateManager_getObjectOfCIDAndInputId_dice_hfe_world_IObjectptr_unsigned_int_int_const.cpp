// FUNCTION: BF2 0x6a1060
namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual unsigned int getClassID() const;
};

class IObject {
public:
    char _pad0[0x20];
    IObjectTemplate* m_template;
    char _pad30[0x58 - 0x30];
    IObject* m_next;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassID() const;
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
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual IObject* getFirstChild();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual signed char getInputId();
};

class ObjectTemplateManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual IObject* getObjectOfCIDAndInputId(IObject* o, unsigned int cid, int inputId) const;
};

IObject* ObjectTemplateManager::getObjectOfCIDAndInputId(IObject* o, unsigned int cid, int inputId) const {
    if (!o)
        return 0;
    IObjectTemplate* t = o->m_template;
    if (t && t->getClassID() == cid) {
        if (inputId == (int)o->getInputId())
            return o;
    }
    for (IObject* c = o->getFirstChild(); c; c = c->m_next) {
        IObject* r = this->getObjectOfCIDAndInputId(c, cid, inputId);
        if (r)
            return r;
    }
    return 0;
}

} } }

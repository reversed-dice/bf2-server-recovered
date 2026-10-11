// FUNCTION: BF2 0x552a90
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IIkTemplateComponent;

struct IObject {
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
    virtual IObject* v60();
};

extern IObject* findIkObject(IObject*);

class Soldier {
public:
    void findInverseKinamaticObject();
private:
    char _pad0[0x398];
    IObject* m_a;
    char _pad1[0x448 - 0x398 - 8];
    IObject* m_b;
    char _pad2[0x450 - 0x448 - 8];
    void* m_c;
    IObject* getHolder() { IObject*& r = m_a; return (r != 0) ? *(IObject**)((char*)r + 8) : r; }
};

void Soldier::findInverseKinamaticObject()
{
    IObject* p = getHolder();
    m_b = findIkObject(p->v60());
    if (m_b == 0) {
        IObject* q = getHolder();
        m_b = findIkObject(*(IObject**)((char*)q + 0x58));
    }
    if (m_b != 0) {
        void* t = *(void**)((char*)m_b + 0x28);
        m_c = (void*)((void* (*)(void*, unsigned int))(*(void***)t)[0xb8 / 8])(t, IID_IIkTemplateComponent);
    }
}

} } }

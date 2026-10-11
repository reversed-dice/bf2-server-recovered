// FUNCTION: BF2 0x69a860
#include <vector>

// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
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
    virtual IObject* getChild();

    char m_pad[0x48];
    IObject* m_parentRef;
    IObject* m_nextSibling;
};

class ObjectPredicator {
public:
    virtual bool accepts(IObject* obj) const;
};

void getChilds(IObject* obj, std::vector<IObject*>& out, ObjectPredicator* acceptor, ObjectPredicator* rejector)
{
    if (obj == 0)
        return;
    if (rejector != 0 && rejector->accepts(obj))
        return;
    if (acceptor == 0 || acceptor->accepts(obj))
        out.push_back(obj);
    for (IObject* c = obj->getChild(); c; c = c->m_nextSibling)
        getChilds(c, out, acceptor, rejector);
}

} } }

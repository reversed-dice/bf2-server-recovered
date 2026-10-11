// FUNCTION: BF2 0x68e1f0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

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

    unsigned char m_flags;
    char _pad[0x4f];
    IObject* m_nextSibling;
};

class ObjectPredicator {
public:
    virtual bool accepts(IObject* obj) const;
};

void addChildObjects(IObject* obj, std::vector<IObject*>& out, ObjectPredicator* pred)
{
    while (obj != 0) {
        if ((obj->m_flags & 1) == 0) {
            if (pred == 0 || pred->accepts(obj))
                out.push_back(obj);
            IObject* child = obj->getChild();
            if (child != 0)
                addChildObjects(child, out, pred);
        }
        obj = obj->m_nextSibling;
    }
}

} } }

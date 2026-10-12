// FUNCTION: BF2 0x69b400
namespace dice { namespace hfe { namespace world {

extern int CID_SoldierTemplate;
extern int CID_SimpleObjectTemplate;

class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int getClassID(); // 0x20
    /* dummy slots up to 0x1a0: 0x1a0 / 8 = 52 */
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51();
    virtual unsigned int getFlags(); // slot 52 = 0x1a0
};

class IObject {
public:
    char pad[0x28];
    ITemplate* m_template;
};

class ObjectFlagPredicator {
public:
    virtual ~ObjectFlagPredicator();
    virtual bool predicate(IObject*);

    char pad[0x10 - 8];
    IObject* m_root;
    bool m_flag;
};

IObject const* getRootParent(IObject const*);

class LineTestPredicator : public ObjectFlagPredicator {
public:
    virtual bool predicate(IObject*);
};

bool LineTestPredicator::predicate(IObject* obj)
{
    if (m_flag) {
        if (obj->m_template->getClassID() == CID_SoldierTemplate)
            return false;
    }

    if (getRootParent(obj) == m_root || obj == m_root)
        return false;

    if (obj->m_template->getClassID() == CID_SimpleObjectTemplate) {
        if ((obj->m_template->getFlags() & 2) != 0)
            return false;
    }

    return ObjectFlagPredicator::predicate(obj);
}

} } }

// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6eb090
// dice::hfe::world::internalFindFirstChildOfCID(IObject*, unsigned int, unsigned int)

namespace dice { namespace hfe { namespace world {

class IObject;

class IObjectTemplate {
public:
    virtual void _t0();
    virtual void _t1();
    virtual void _t2();
    virtual void _t3();
    virtual unsigned int getClassID();
};

class IObject {
public:
    virtual void _v0();  virtual void _v1();  virtual void _v2();  virtual void _v3();
    virtual void _v4();  virtual void _v5();  virtual void _v6();  virtual void _v7();
    virtual void _v8();  virtual void _v9();  virtual void _v10(); virtual void _v11();
    virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15();
    virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19();
    virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23();
    virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27();
    virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31();
    virtual void _v32(); virtual void _v33(); virtual void _v34(); virtual void _v35();
    virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39();
    virtual void _v40(); virtual void _v41(); virtual void _v42(); virtual void _v43();
    virtual void _v44(); virtual void _v45(); virtual void _v46(); virtual void _v47();
    virtual void _v48(); virtual void _v49(); virtual void _v50(); virtual void _v51();
    virtual void _v52(); virtual void _v53(); virtual void _v54(); virtual void _v55();
    virtual void _v56(); virtual void _v57(); virtual void _v58(); virtual void _v59();
    virtual IObject* getChild();

    char _padA[0x0];
    unsigned char m_flags;
    char _pad0[0x1f];
    IObjectTemplate* m_template;
    char _pad1[0x28];
    IObject* m_nextChild;
};

} } }

namespace dice { namespace hfe { namespace world {

IObject* internalFindFirstChildOfCID(IObject* obj, unsigned int cid, unsigned int cid2)
{
    if (!obj)
        return 0;
    if (!(obj->m_flags & 1)) {
        if (cid == obj->m_template->getClassID())
            return obj;
        if (cid2 == obj->m_template->getClassID())
            return 0;
    }
    IObject* s = obj->m_nextChild;
    if (s) {
        if (!(s->m_flags & 1)) {
            if (cid == s->m_template->getClassID())
                return s;
            if (cid2 == s->m_template->getClassID())
                goto afterSibling;
        }
        IObject* r = internalFindFirstChildOfCID(s->m_nextChild, cid, cid2);
        if (r)
            return r;
        if (!(s->m_flags & 1)) {
            r = internalFindFirstChildOfCID(s->getChild(), cid, cid2);
            if (r)
                return r;
        }
    }
afterSibling:
    if (obj->m_flags & 1)
        return 0;
    IObject* n = obj->getChild();
    if (!n)
        return 0;
    if (!(n->m_flags & 1)) {
        if (cid == n->m_template->getClassID())
            return n;
        if (cid2 == n->m_template->getClassID())
            return 0;
    }
    IObject* r = internalFindFirstChildOfCID(n->m_nextChild, cid, cid2);
    if (r)
        return r;
    if (n->m_flags & 1)
        return 0;
    IObject* m = n->getChild();
    if (!m)
        return 0;
    if (!(m->m_flags & 1)) {
        if (cid == m->m_template->getClassID())
            return m;
        if (cid2 == m->m_template->getClassID())
            return 0;
    }
    r = internalFindFirstChildOfCID(m->m_nextChild, cid, cid2);
    if (r)
        return r;
    if (m->m_flags & 1)
        return 0;
    r = internalFindFirstChildOfCID(m->getChild(), cid, cid2);
    if (r)
        return r;
    return 0;
}

} } }

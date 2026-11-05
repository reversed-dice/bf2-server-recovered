// FUNCTION: BF2 0x43ac20
namespace dice { namespace hfe {

namespace world {

extern unsigned int IID_IPlayerControlObject;
extern const unsigned int CID_SoldierTemplate;
extern const unsigned int CID_PlayerControlObjectTemplate;
extern const unsigned int CID_ParachuteTemplate;

class ITemplate {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual unsigned int getClassID(); // slot 0x20
};

class IObject;

class IPlayerControlObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual IObject* getControlled(); // slot 0x28
};

class IObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void* queryInterface(unsigned int iid); // slot 0x18
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    virtual void _v48();
    virtual void _v50();
    virtual void _v58();
    virtual void _v60();
    virtual void _v68();
    virtual void _v70();
    virtual void _v78();
    virtual void _v80();
    virtual void _v88();
    virtual void _v90();
    virtual void _v98();
    virtual void _va0();
    virtual void _va8();
    virtual void _vb0();
    virtual void _vb8();
    virtual void _vc0();
    virtual void _vc8();
    virtual void _vd0();
    virtual void _vd8();
    virtual void _ve0();
    virtual void _ve8();
    virtual void _vf0();
    virtual void _vf8();
    virtual void _v100();
    virtual void _v108();
    virtual void _v110();
    virtual void _v118();
    virtual void _v120();
    virtual void _v128();
    virtual void _v130();
    virtual void _v138();
    virtual void _v140();
    virtual void _v148();
    virtual void _v150();
    virtual void _v158();
    virtual void _v160(float dt, unsigned int mask); // slot 0x160
    virtual void _v168();
    virtual void _v170();
    virtual void _v178();
    virtual void _v180();
    virtual void _v188();
    virtual void _v190();
    virtual void _v198();
    virtual void _v1a0();
    virtual void _v1a8();
    virtual void _v1b0();
    virtual void _v1b8();
    virtual void _v1c0();
    virtual void _v1c8();
    virtual void _v1d0();
    virtual void _v1d8();
    virtual IObject* getFirstChild(); // slot 0x1e0

    unsigned int m_flags;   // +0x8
    char _pad0[0x28 - 0xc];
    ITemplate* m_template;  // +0x28
    char _pad1[0x58 - 0x30];
    IObject* m_nextChild;   // +0x58
};

}

void performHandleUpdate(float dt, world::IObject* obj, unsigned int mask, bool recurse)
{
    if (obj == 0)
        return;

    if (obj->m_flags & 0x800)
        obj->_v160(dt, mask);

    world::IPlayerControlObject* pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
    if (pco != 0 && obj->m_template->getClassID() != world::CID_SoldierTemplate) {
        pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
        if (pco != 0) {
            world::IObject* soldier = pco->getControlled();
            if (soldier != 0 && soldier->m_template->getClassID() == world::CID_SoldierTemplate)
                performHandleUpdate(dt, soldier, mask, recurse);
        }
    }

    for (world::IObject* c = obj->getFirstChild(); c != 0; c = c->m_nextChild) {
        if (c->m_flags & 0x1)
            continue;
        if (!recurse) {
            unsigned int cid = c->m_template->getClassID();
            if (cid == world::CID_PlayerControlObjectTemplate ||
                cid == world::CID_SoldierTemplate ||
                cid == world::CID_ParachuteTemplate)
                continue;
        }
        performHandleUpdate(dt, c, mask, recurse);
    }
}

} }

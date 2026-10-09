// FUNCTION: BF2 0x43a870
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_IPlayerControlObject;

class IComp88 {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0(); virtual void _vd8();
    virtual void _ve0(); virtual void _ve8(); virtual void _vf0(); virtual void _vf8();
    virtual void _v100(); virtual void _v108(); virtual void _v110(); virtual void _v118();
    virtual void _v120(); virtual void _v128(); virtual void _v130(); virtual void _v138();
    virtual void _v140(); virtual void _v148(); virtual void _v150(); virtual void _v158();
    virtual void _v160(); virtual void _v168(); virtual void _v170(); virtual void _v178();
    virtual void _v180(); virtual void _v188(); virtual void _v190(); virtual void _v198();
    virtual void _v1a0(); virtual void _v1a8(); virtual void _v1b0(); virtual void _v1b8();
    virtual void _v1c0(); virtual void _v1c8(); virtual void _v1d0(); virtual void _v1d8();
    virtual void _v1e0(); virtual void _v1e8(); virtual void _v1f0(); virtual void _v1f8();
    virtual void _v200(); virtual void _v208(); virtual void _v210(); virtual void _v218();
    virtual void _v220(); virtual void _v228();
    virtual void resetPhysics(int); // slot 0x230
};

class IComp90 {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void reset(); // slot 0x40
};

class IObject {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual void* queryInterface(unsigned int id);
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0(); virtual void _vd8();
    virtual void _ve0(); virtual void _ve8(); virtual void _vf0(); virtual void _vf8();
    virtual void _v100(); virtual void _v108(); virtual void _v110(); virtual void _v118();
    virtual void _v120(); virtual void _v128(); virtual void _v130(); virtual void _v138();
    virtual void _v140(); virtual void _v148(); virtual void _v150(); virtual void _v158();
    virtual void _v160(); virtual void _v168(); virtual void _v170(); virtual void _v178();
    virtual void _v180(); virtual void _v188(); virtual void _v190(); virtual void _v198();
    virtual void _v1a0(); virtual void _v1a8(); virtual void _v1b0(); virtual void _v1b8();
    virtual void _v1c0(); virtual void _v1c8(); virtual void _v1d0(); virtual void _v1d8();
    virtual IObject* getFirstChild(); // slot 0x1e0

    char _pad[0x50];
    IObject* m_nextChild; // +0x58
    char _pad2[0x28];     // 0x58 + 8 + 0x28 = 0x88
    IComp88* m_comp88;    // +0x88
    IComp90* m_comp90;    // +0x90
};
}

void resetPhysics(world::IObject* obj, bool recurse)
{
    if (obj->m_comp88) {
        obj->m_comp88->resetPhysics(1);
    }
    if (obj->m_comp90) {
        obj->m_comp90->reset();
    }
    for (world::IObject* child = obj->getFirstChild(); child; child = child->m_nextChild) {
        if (!recurse && child->queryInterface(world::IID_IPlayerControlObject)) {
            continue;
        }
        resetPhysics(child, recurse);
    }
}

} }

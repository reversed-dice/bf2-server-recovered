// FUNCTION: BF2 0x43aba0
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_IPlayerControlObject;

class IGhostComponent {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70();
    virtual void setGhosting(bool enabled); // slot 0x78
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
    virtual void _v1a0(); virtual void _v1a8();
    virtual IGhostComponent* getGhostComponent(); // slot 0x1b0
    virtual void _v1b8(); virtual void _v1c0(); virtual void _v1c8(); virtual void _v1d0();
    virtual void _v1d8();
    virtual IObject* getFirstChild(); // slot 0x1e0

    char _pad[0x50];
    IObject* m_nextChild; // +0x58
};
}

void enableGhosting(world::IObject* obj, bool recurse)
{
    world::IGhostComponent* comp = obj->getGhostComponent();
    if (comp) {
        comp->setGhosting(true);
    }
    for (world::IObject* child = obj->getFirstChild(); child; child = child->m_nextChild) {
        if (!recurse && child->queryInterface(world::IID_IPlayerControlObject)) {
            continue;
        }
        enableGhosting(child, recurse);
    }
}

} }

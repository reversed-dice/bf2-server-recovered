// FUNCTION: BF2 0x43adb0
namespace dice { namespace hfe {
namespace world {

extern unsigned int CID_PlayerControlObjectTemplate;
extern unsigned int CID_SoldierTemplate;
extern unsigned int CID_ParachuteTemplate;
extern unsigned int CID_RotationalBundleTemplate;

class IObjectTemplate {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual unsigned int getType();
};

class IObject {
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
    virtual IObject* getFirstChild();
    virtual void _v1e8(); virtual void _v1f0(); virtual void _v1f8();
    virtual void _v200(); virtual void _v208(); virtual void _v210(); virtual void _v218();
    virtual void _v220(); virtual void _v228(); virtual void _v230(); virtual void _v238();
    virtual void _v240(); virtual void _v248(); virtual void _v250(); virtual void _v258();
    virtual void _v260(); virtual void _v268(); virtual void _v270(); virtual void _v278();
    virtual void _v280(); virtual void _v288(); virtual void _v290(); virtual void _v298();
    virtual void _v2a0(); virtual void _v2a8(); virtual void _v2b0(); virtual void _v2b8();
    virtual void _v2c0(); virtual void _v2c8(); virtual void _v2d0(); virtual void _v2d8();
    virtual void _v2e0(); virtual void _v2e8(); virtual void _v2f0(); virtual void _v2f8();
    virtual void _v300(); virtual void _v308(); virtual void _v310(); virtual void _v318();
    virtual void _v320(); virtual void _v328();
    virtual void stabilizeYaw();

    unsigned short m_flags;
    char _pad0[0x1e];
    IObjectTemplate* m_template;
    char _pad1[0x28];
    IObject* m_nextChild;
};

}

void performYawStabilisation(world::IObject* obj) {
    if (obj) {
        if (obj->m_flags & 0x800) {
            world::IObjectTemplate* tmpl = obj->m_template;
            if (tmpl && tmpl->getType() == world::CID_RotationalBundleTemplate) {
                obj->stabilizeYaw();
            }
        }
        world::IObject* child = obj->getFirstChild();
        if (child) {
            unsigned int cidPco = world::CID_PlayerControlObjectTemplate;
            unsigned int cidSoldier = world::CID_SoldierTemplate;
            unsigned int cidParachute = world::CID_ParachuteTemplate;
            do {
                if (!(child->m_flags & 1)) {
                    unsigned int type = child->m_template->getType();
                    if (type == cidPco) goto next;
                    if (type == cidSoldier) goto next;
                    if (type == cidParachute) goto next;
                    performYawStabilisation(child);
                }
            next:
                child = child->m_nextChild;
            } while (child);
        }
    }
}

} }

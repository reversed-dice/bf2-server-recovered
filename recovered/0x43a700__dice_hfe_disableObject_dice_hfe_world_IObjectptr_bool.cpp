// FUNCTION: BF2 0x43a700
namespace dice { namespace hfe {
namespace world {
class IObject {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual void* queryInterface(int id);
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void setDisabled(bool disabled, bool recursive);
    char _pad8[0x48];
    void* m_parent;
};
}

extern int g_interfaceId;

void disableObject(world::IObject* o, bool)
{
    if (!o->m_parent || o->queryInterface(g_interfaceId))
        o->setDisabled(true, false);
}

} }

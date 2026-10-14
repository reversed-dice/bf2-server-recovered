// FUNCTION: BF2 0x430660
namespace dice { namespace hfe { namespace world {
class IObject {
public:
    virtual void _v00() = 0;
    virtual void _v01() = 0;
    virtual void _v02() = 0;
    virtual void _v03() = 0;
    virtual void _v04() = 0;
    virtual void _v05() = 0;
    virtual void _v06() = 0;
    virtual void _v07() = 0;
    virtual void _v08() = 0;
    virtual void _v09() = 0;
    virtual void _v10() = 0;
    virtual void _v11() = 0;
    virtual void _v12() = 0;
    virtual void _v13() = 0;
    virtual void _v14() = 0;
    virtual void _v15() = 0;
    virtual void _v16() = 0;
    virtual void _v17() = 0;
    virtual void _v18() = 0;
    virtual void _v19() = 0;
    virtual void _v20() = 0;
    virtual void _v21() = 0;
    virtual void _v22() = 0;
    virtual void _v23() = 0;
    virtual void _v24() = 0;
    virtual void _v25() = 0;
    virtual void _v26() = 0;
    virtual void _v27() = 0;
    virtual void _v28() = 0;
    virtual void _v29() = 0;
    virtual void _v30() = 0;
    virtual void _v31() = 0;
    virtual void _v32() = 0;
    virtual void _v33() = 0;
    virtual void _v34() = 0;
    virtual void _v35() = 0;
    virtual void _v36() = 0;
    virtual void _v37() = 0;
    virtual void _v38() = 0;
    virtual void _v39() = 0;
    virtual void _v40() = 0;
    virtual void _v41() = 0;
    virtual void _v42() = 0;
    virtual void _v43() = 0;
    virtual void _v44() = 0;
    virtual void _v45() = 0;
    virtual void _v46() = 0;
    virtual void _v47() = 0;
    virtual void _v48() = 0;
    virtual void _v49() = 0;
    virtual void _v50() = 0;
    virtual void _v51() = 0;
    virtual void _v52() = 0;
    virtual void _v53() = 0;
    virtual IObject* getNetworkable() = 0;   // index 54 = 0x1b0
    virtual void _v55() = 0;
    virtual void _v56() = 0;
    virtual void _v57() = 0;
    virtual void _v58() = 0;
    virtual void _v59() = 0;
    char _pad[0x48];
    IObject* m_next;   // +0x50
};
} } }
dice::hfe::world::IObject* dice_hfe_anonymous_namespace_findFirstRealNetworkable_dice_hfe_world_IObjectptr(dice::hfe::world::IObject* obj)
{
    while (obj != 0) {
        if (obj->getNetworkable() != 0 && *(unsigned short*)((char*)obj->getNetworkable() + 8) != 0) {
            return obj;
        }
        obj = obj->m_next;
    }
    return 0;
}

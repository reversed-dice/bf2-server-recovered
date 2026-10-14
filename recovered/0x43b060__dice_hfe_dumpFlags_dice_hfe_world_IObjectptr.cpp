// FUNCTION: BF2 0x43b060
namespace dice { namespace hfe { namespace world {
struct IObject {
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
    virtual void setSlotB8(int a, int b) = 0;
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
    virtual void _v54() = 0;
    virtual void _v55() = 0;
    virtual void _v56() = 0;
    virtual void _v57() = 0;
    virtual void _v58() = 0;
    virtual void _v59() = 0;
    virtual IObject* getFirstChild() = 0;
    char pad[80];
    IObject* next_;
};
} } }
void dice_hfe_dumpFlags(dice::hfe::world::IObject* obj)
{
    obj->setSlotB8(*(int*)0xc965a8, *(int*)0xc965a8);
    dice::hfe::world::IObject* child = obj->getFirstChild();
    if (!child)
        return;
    do {
        dice_hfe_dumpFlags(child);
        child = child->next_;
    } while (child);
}

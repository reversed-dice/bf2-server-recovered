// FUNCTION: BF2 0x4a59d0
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class IObject {
public:
    virtual void _p0() = 0;
    virtual void _p1() = 0;
    virtual void _p2() = 0;
    virtual void* queryInterface(unsigned int iid) = 0;
    virtual void _p4() = 0;
    virtual void _p5() = 0;
    virtual void _p6() = 0;
    virtual void _p7() = 0;
    virtual int getCountA() = 0;
    virtual int getCountB() = 0;
    virtual void _p10() = 0;
    virtual void _p11() = 0;
    virtual void _p12() = 0;
    virtual void _p13() = 0;
    virtual void _p14() = 0;
    virtual void _p15() = 0;
    virtual void _p16() = 0;
    virtual void _p17() = 0;
    virtual void _p18() = 0;
    virtual void _p19() = 0;
    virtual void _p20() = 0;
    virtual void _p21() = 0;
    virtual void _p22() = 0;
    virtual void _p23() = 0;
    virtual void _p24() = 0;
    virtual void _p25() = 0;
    virtual void _p26() = 0;
    virtual const Vec3& getPosition() const = 0;
};

class IPlayer {
public:
    virtual void _v0() = 0;
    virtual void _v1() = 0;
    virtual void _v2() = 0;
    virtual void _v3() = 0;
    virtual void _v4() = 0;
    virtual void _v5() = 0;
    virtual void _v6() = 0;
    virtual void _v7() = 0;
    virtual void _v8() = 0;
    virtual void _v9() = 0;
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
    virtual void _v54() = 0;
    virtual void _v55() = 0;
    virtual void _v56() = 0;
    virtual void _v57() = 0;
    virtual void _v58() = 0;
    virtual void _v60() = 0;
    virtual void _v61() = 0;
    virtual void _v62() = 0;
    virtual void _v63() = 0;
    virtual void _v64() = 0;
    virtual void _v65() = 0;
    virtual void _v66() = 0;
    virtual void _v67() = 0;
    virtual void _v68() = 0;
    virtual void _v69() = 0;
    virtual void _v70() = 0;
    virtual void _v71() = 0;
    virtual void _v72() = 0;
    virtual void _v73() = 0;
    virtual void _v74() = 0;
    virtual void _v75() = 0;
    virtual void _v76() = 0;
    virtual void _v77() = 0;
    virtual void _v78() = 0;
    virtual void _v79() = 0;
    virtual void _v80() = 0;
    virtual void _v81() = 0;
    virtual void _v82() = 0;
    virtual void _v83() = 0;
    virtual void _v84() = 0;
    virtual void _v85() = 0;
    virtual void _v86() = 0;
    virtual void _v87() = 0;
    virtual void _v88() = 0;
    virtual void _v89() = 0;
    virtual void _v90() = 0;
    virtual void _v91() = 0;
    virtual void _v92() = 0;
    virtual void _v93() = 0;
    virtual void _v94() = 0;
    virtual void _v95() = 0;
    virtual void _v96() = 0;
    virtual void _v97() = 0;
    virtual void _v98() = 0;
    virtual void _v99() = 0;
    virtual void _v100() = 0;
    virtual void _v101() = 0;
    virtual void _v102() = 0;
    virtual void _v103() = 0;
    virtual void _v104() = 0;
    virtual void _v105() = 0;
    virtual void _v106() = 0;
    virtual void _v107() = 0;
    virtual void _v108() = 0;
    virtual void _v109() = 0;
    virtual void _v110() = 0;
    virtual void _v111() = 0;
    virtual void _v112() = 0;
    virtual void _v113() = 0;
    virtual void _v114() = 0;
    virtual void _v115() = 0;
    virtual void _v116() = 0;
    virtual void _v117() = 0;
    virtual void _v118() = 0;
    virtual void _v119() = 0;
    virtual void _v120() = 0;
    virtual void _v121() = 0;
    virtual void _v122() = 0;
    virtual void _v123() = 0;
    virtual void _v124() = 0;
    virtual void _v125() = 0;
    virtual void _v126() = 0;
    virtual void _v59b() = 0;
    virtual void onKitPicked(double t) = 0;
};
}

extern unsigned int IID_IItemObject;
extern unsigned int IID_IItemContainerObject;

class WorldPref {
public:
    static double getWorldTime();
};

world::IObject* findKitObject(const Vec3& v, float f);

class GameLogic {
public:
    virtual void _g0() = 0;
    virtual void _g1() = 0;
    virtual void _g2() = 0;
    virtual void _g3() = 0;
    virtual void _g4() = 0;
    virtual void _g5() = 0;
    virtual void _g6() = 0;
    virtual void _g7() = 0;
    virtual void _g8() = 0;
    virtual void _g9() = 0;
    virtual void _g10() = 0;
    virtual void _g11() = 0;
    virtual void _g12() = 0;
    virtual void _g13() = 0;
    virtual void _g14() = 0;
    virtual void _g15() = 0;
    virtual void _g16() = 0;
    virtual void _g17() = 0;
    virtual void _g18() = 0;
    virtual void _g19() = 0;
    virtual void _g20() = 0;
    virtual void _g21() = 0;
    virtual void _g22() = 0;
    virtual void _g23() = 0;
    virtual void _g24() = 0;
    virtual void _g25() = 0;
    virtual void _g26() = 0;
    virtual void _g27() = 0;
    virtual void _g28() = 0;
    virtual void _g29() = 0;
    virtual void _g30() = 0;
    virtual void _g31() = 0;
    virtual void _g32() = 0;
    virtual void _g33() = 0;
    virtual void _g34() = 0;
    virtual void _g35() = 0;
    virtual void _g36() = 0;
    virtual void _g37() = 0;
    virtual void _g38() = 0;
    virtual void _g39() = 0;
    virtual void _g40() = 0;
    virtual void _g41() = 0;
    virtual void _g42() = 0;
    virtual void _g43() = 0;
    virtual void _g44() = 0;
    virtual void _g45() = 0;
    virtual void _g46() = 0;
    virtual void _g47() = 0;
    virtual void _g48() = 0;
    virtual void _g49() = 0;
    virtual void _g50() = 0;
    virtual void _g51() = 0;
    virtual void _g52() = 0;
    virtual void _g53() = 0;
    virtual void _g54() = 0;
    virtual void _g55() = 0;
    virtual void _g56() = 0;
    virtual void _g57() = 0;
    virtual void _g58() = 0;
    virtual void handlePickup(world::IObject* kit, world::IPlayer* p, world::IObject* o, bool f) = 0;
};

class ServerGameLogic : public GameLogic {
public:
    bool pickUpClosestKit(world::IPlayer* p, world::IObject* o, float f);
};

bool ServerGameLogic::pickUpClosestKit(world::IPlayer* p, world::IObject* o, float f)
{
    world::IObject* kit = findKitObject(o->getPosition(), f);
    if (kit != 0) {
        world::IObject* item = (world::IObject*)kit->queryInterface(IID_IItemObject);
        if (item != 0) {
            world::IObject* cont = (world::IObject*)o->queryInterface(IID_IItemContainerObject);
            int a = cont->getCountA();
            world::IObject* it2 = (world::IObject*)item->queryInterface(IID_IItemObject);
            int b = it2->getCountB();
            if (a == b) {
                handlePickup(kit, p, o, 1);
                p->onKitPicked(WorldPref::getWorldTime());
            }
            return true;
        }
    }
    return false;
}

} }

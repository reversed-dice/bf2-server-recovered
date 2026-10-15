// FUNCTION: BF2 0x55d5d0
#include <math.h>

extern "C" void* dice_hfe_gameLogic;
extern "C" char* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(char* node);

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class IObject {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void* queryInterface(unsigned int iid);
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual Vec3 const& getPosition();   // slot 27 (0xd8)
};

extern const unsigned int IID_IControlPoint;

class IControlPoint {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid) const;
    virtual void getAreaValueTeam1();
    virtual void getAreaValueTeam2();
    virtual void setTeam(unsigned int);
    virtual unsigned int getTeam();
};

class SupplyObject : public IObject {
public:
    unsigned int updateTeamFromClosestCP();
};

} } }

class GameLogic {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void* slot93();
};

unsigned int dice::hfe::world::SupplyObject::updateTeamFromClosestCP() {
    void* mgr = ((GameLogic*)dice_hfe_gameLogic)->slot93();
    unsigned int team = 0;
    char* node = *(char**)((char*)mgr + 0x18);
    char* end = (char*)mgr + 0x8;
    float best = 9999.0f;
    for (; node != end; node = _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(node)) {
        void* cp = (*(IObject**)(node + 0x28))->queryInterface(IID_IControlPoint);
        Vec3 const& p = (*(IObject**)(node + 0x28))->getPosition();
        Vec3 const& q = getPosition();
        float dx = p.x - q.x;
        float dy = p.y - q.y;
        float dz = p.z - q.z;
        float dist = sqrtf(dx * dx + dy * dy + dz * dz);
        if (dist < best) {
            team = ((world::IControlPoint*)cp)->getTeam();
            best = dist;
        }
    }
    return team;
}

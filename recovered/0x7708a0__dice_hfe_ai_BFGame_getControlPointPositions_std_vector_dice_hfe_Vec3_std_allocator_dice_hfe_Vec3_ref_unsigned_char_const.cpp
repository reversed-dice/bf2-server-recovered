// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <map>

// FUNCTION: BF2 0x7708a0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {
class ControlPoint {
public:
    virtual void cp0();
    virtual void cp1();
    virtual void cp2();
    virtual void cp3();
    virtual void cp4();
    virtual void cp5();
    virtual void cp6();
    virtual void cp7();
    virtual void cp8();
    virtual void cp9();
    virtual void cp10();
    virtual void cp11();
    virtual void cp12();
    virtual void cp13();
    virtual void cp14();
    virtual void cp15();
    virtual void cp16();
    virtual void cp17();
    virtual void cp18();
    virtual void cp19();
    virtual void cp20();
    virtual void cp21();
    virtual void cp22();
    virtual void cp23();
    virtual void cp24();
    virtual void cp25();
    virtual void cp26();
    virtual Vec3 const& getPosition() const;
};
}

class GameLogic {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
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
    virtual void* getControlPointsMap();
};

extern GameLogic* gameLogic;

namespace ai {

class BFGame {
public:
    void getControlPointPositions(::std::vector<dice::hfe::Vec3>& out, unsigned char team) const;
};

void BFGame::getControlPointPositions(::std::vector<dice::hfe::Vec3>& out, unsigned char team) const {
    if (dice::hfe::gameLogic) {
        typedef ::std::map<unsigned int, dice::hfe::world::ControlPoint*> CPMap;
        CPMap* m = (CPMap*)dice::hfe::gameLogic->getControlPointsMap();
        CPMap::const_iterator it = m->begin();
        if (it != m->end()) {
            do {
                out.push_back(it->second->getPosition());
                ++it;
            } while (m->end() != it);
        }
    }
}

} } }

// FUNCTION: BF2 0x6bd610
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>
#include <new>
#include <vector>
#include <list>
#include <map>

namespace dice { namespace anim {

class Skeleton {
public:
    char _pad[0x80];
    ~Skeleton();
};

class RagDoll;

class RagDollTemplate {
public:
    struct Constraint { char _pad[0x8]; ~Constraint(); };
    struct AngleConstraint { char _pad[0x8]; ~AngleConstraint(); };
    struct DihedralAngleConstraint { char _pad[0x8]; ~DihedralAngleConstraint(); };
    struct DistanceLessThanConstraint { char _pad[0x8]; ~DistanceLessThanConstraint(); };
    struct Element12 { char _pad[0xc]; ~Element12() {} };
    struct Element88 { char _pad[0x58]; ~Element88() {} };
    struct Element8 { char _pad[0x8]; ~Element8() {} };
    struct Deleter { void* p; ~Deleter() { if (p) ::operator delete(p); } };

    char _pad0[0x8];
    std::vector<Element12> m_8;
    std::vector<Element88> m_20;
    std::vector<Element8> m_38;
    Deleter m_50;
    char _pad1[0x20];
    Deleter m_78;
    char _pad2[0x10];
    Deleter m_90;
    char _pad2b[0x10];
    std::list<Constraint> m_a8;
    std::list<Constraint> m_b8;
    std::list<Constraint> m_c8;
    std::list<AngleConstraint> m_d8;
    std::list<DihedralAngleConstraint> m_e8;
    std::list<DistanceLessThanConstraint> m_f8;
    Skeleton* m_skeleton;
    char _pad3[0x18];
    std::map<RagDoll*, bool> m_instances;

    ~RagDollTemplate();
};

RagDollTemplate::~RagDollTemplate() {
    if (m_instances.size() != 0) {
        abort();
    }
    delete m_skeleton;
}

} }

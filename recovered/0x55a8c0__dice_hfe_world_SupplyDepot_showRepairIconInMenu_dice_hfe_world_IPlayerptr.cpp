// FUNCTION: BF2 0x55a8c0
#include <math.h>
namespace dice { namespace hfe { namespace world {

struct Vec3 {
    float x; float y; float z;
};

class IObject {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual IObject* v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual const Vec3& getPosition();
    char m_pad0[0x50 - 8];
    IObject* m_parent;
};

class IPlayer : public IObject {
public:
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40();
    virtual IObject* p41();
    virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45();
    virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49();
    virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53();
    virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57();
    virtual int p58();
};

struct DepotTemplate {
    char m_pad0[0x1c8];
    float m_radius;
    char m_pad1[4];
    bool m_1d0;
    char m_pad2[0x2c8 - 0x1d1];
    int* begin;
    int* end;
};

class SupplyDepot : public IObject {
public:
    char m_pad1[0x230 - 0x58];
    DepotTemplate* m_template;
    int m_team;

    bool showRepairIconInMenu(IPlayer* player);
};

bool SupplyDepot::showRepairIconInMenu(IPlayer* player) {
    if (!m_template->m_1d0)
        return false;
    IObject* a = player->p41();
    IObject* b = player->v18();
    if (a == b)
        return false;
    int v = player->p58();
    if (v != m_team && m_team != 0)
        return false;
    IObject* o = player->v18();
    const Vec3& p = o->getPosition();
    const Vec3& q = this->getPosition();
    float dx = p.x - q.x;
    float dy = p.y - q.y;
    float dz = p.z - q.z;
    if (sqrtf(dx * dx + dy * dy + dz * dz) > m_template->m_radius)
        return false;
    long n = m_template->end - m_template->begin;
    return n != 0;
}

} } }

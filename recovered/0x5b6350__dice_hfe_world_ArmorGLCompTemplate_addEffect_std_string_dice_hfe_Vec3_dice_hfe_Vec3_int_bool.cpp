// BF2_FLAGS: -fno-strict-aliasing -fcrossjumping
// FUNCTION: BF2 0x5b6350
#include <string>
#include <map>
#include <list>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

int compareIgnoreCase(char const*, char const*);

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class IObjectTemplate;

class ObjectTemplateManager {
public:
    IObjectTemplate const* load(std::string const& name);
};

extern ObjectTemplateManager* objectTemplateManager;

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& msg);
    ~Debug();
};

struct DamageEffects {
    std::list<IObjectTemplate*> m_effects;   // 0x00
    std::list<Vec3> m_pos1;                  // 0x10
    std::list<Vec3> m_pos2;                  // 0x20
    std::list<IObjectTemplate*> m_3;         // 0x30
    std::list<Vec3> m_pos3;                  // 0x40
    std::list<Vec3> m_pos4;                  // 0x50
};

class ArmorGLCompTemplate {
public:
    virtual ~ArmorGLCompTemplate();
    char _pad[0x10];
    std::map<int, DamageEffects*> m_map1;    // 0x18
    std::map<int, DamageEffects*> m_map2;    // 0x48

    void addEffect(const std::string& name, const Vec3& pos1, const Vec3& pos2, int idx,
                   bool flag);
};

void ArmorGLCompTemplate::addEffect(const std::string& name, const Vec3& pos1, const Vec3& pos2,
                                    int idx, bool flag) {
    if (compareIgnoreCase("none", name.c_str()) == 0) {
        std::pair<std::map<int, DamageEffects*>::iterator, bool> r =
            m_map1.insert(std::make_pair(idx, (DamageEffects*)0));
        return;
    }

    typedef IObjectTemplate const* (*LoadFn)(void*, std::string const&);
    IObjectTemplate* t = (IObjectTemplate*)((LoadFn)(*(void***)objectTemplateManager)[0x48 / 8])
                             (objectTemplateManager, name);
    if (t == 0)
        return;

    std::map<int, DamageEffects*>::iterator last = m_map1.end();
    std::map<int, DamageEffects*>::iterator it = m_map1.find(idx);
    DamageEffects* d;
    if (last == it) {
        d = new DamageEffects();
        if (d == 0) {
            Debug(6, std::string("Game/Objects/GameLogicComp/ArmorGLCompTemplate.cpp"), 0x166,
                  std::string(&DAT_00bb25f1)).os
                << "Unable to allocate memory!";
        }
        std::pair<std::map<int, DamageEffects*>::iterator, bool> r =
            m_map1.insert(std::make_pair(idx, d));
    } else {
        d = it->second;
    }

    if (!flag) {
        d->m_effects.push_back(t);
        d->m_pos1.push_back(Vec3(pos1));
        d->m_pos2.push_back(Vec3(pos2));
    } else {
        d->m_3.push_back(t);
        d->m_pos3.push_back(Vec3(pos1));
        d->m_pos4.push_back(Vec3(pos2));
    }
}

} } }

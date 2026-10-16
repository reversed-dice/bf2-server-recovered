// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5b5bd0
#include <string>
#include <vector>

namespace dice { namespace hfe {

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

void turnOffPreCacheOnTemplateAndAllChildren(IObjectTemplate* p);

struct ArmorGLCompTemplate {
    char pad0[0x100];
    std::vector<std::string> m_wreckStrings;   // 0x100
    std::vector<Vec3> m_v118;                  // 0x118
    std::vector<Vec3> m_v130;                  // 0x130
    std::vector<int> m_v148;                   // 0x148
};

void addWreckArmorEffect(long self, int idx, std::string const& name, Vec3 const& a, Vec3 const& b) {
    ArmorGLCompTemplate* m = (ArmorGLCompTemplate*)self;
    typedef IObjectTemplate const* (*LoadFn)(void*, std::string const&);
    IObjectTemplate* t = (IObjectTemplate*)((LoadFn)(*(void***)objectTemplateManager)[0x48 / 8])(objectTemplateManager, name);
    if (t != 0) {
        turnOffPreCacheOnTemplateAndAllChildren(t);
    }
    m->m_wreckStrings.push_back(name);
    m->m_v118.push_back(a);
    m->m_v130.push_back(b);
    m->m_v148.push_back(idx);
}

} } }

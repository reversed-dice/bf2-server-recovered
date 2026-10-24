// FUNCTION: BF2 0x772070
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {
class IObject;
class ObjectPredicator {
public:
    virtual bool predicate(IObject* obj);
    virtual int getFlags() const;
    virtual bool performCulling(IObject* obj);
    virtual bool predicateSurface(int s);
};
} } }

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(float a, float b, float c) { set(a, b, c); }
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace ai {

class IAIObject;

namespace {

class RayCastStopPredicate : public world::ObjectPredicator {
public:
    RayCastStopPredicate(const std::vector<IAIObject*>& list, bool flag, const Vec3& from)
        : m_list(&list), m_flag(flag), m_maxDist(3.402823466e+38F), m_origin(from) {}
    virtual bool predicate(world::IObject* obj) { return true; }
    virtual int getFlags() const { return 1; }
    virtual bool performCulling(world::IObject* obj) { return true; }
    virtual bool predicateSurface(int s) { return true; }
    const std::vector<IAIObject*>* m_list;
    bool m_flag;
    char _pad[0xf];
    float m_maxDist;
    Vec3 m_origin;
};

class SphereExcludeFilter : public world::ObjectPredicator {
public:
    SphereExcludeFilter(const std::vector<IAIObject*>& list, bool flag)
        : m_list(&list), m_flag(flag) {}
    virtual bool predicate(world::IObject* obj) { return true; }
    virtual int getFlags() const { return 1; }
    virtual bool performCulling(world::IObject* obj) { return true; }
    const std::vector<IAIObject*>* m_list;
    bool m_flag;
};

}

class BFObjectEnvironment {
public:
    bool collideLineWithObjects(const Vec3& from, const Vec3& to,
                                const std::vector<IAIObject*>& objects,
                                bool useSphere, float radius, bool flag, bool& out) const;
};

bool BFObjectEnvironment::collideLineWithObjects(const Vec3& from, const Vec3& to,
                                                 const std::vector<IAIObject*>& objects,
                                                 bool useSphere, float radius, bool flag,
                                                 bool& out) const
{
    Vec3 info;
    Vec3 dirSphere;
    Vec3 dirRay;
    Vec3 hitPos(0.0f, 0.0f, 0.0f);
    Vec3 start(0.0f, 0.0f, 0.0f);
    RayCastStopPredicate pred(objects, flag, from);
    float extra;
    bool res;

    if (!useSphere) {
        typedef bool (*Fn)(void*, void*, void*, void*, void*, const Vec3&,
                           const Vec3&, void*, int, int, int, int, int);
        void* mgr = *(void**)0x112ee48;
        Fn fn = (Fn)(*(void***)mgr)[0xd0 / 8];
        dirRay.set(to.x - from.x, to.y - from.y, to.z - from.z);
        res = fn(mgr, &info, &hitPos, &start, &extra, from, dirRay,
                 &pred, 1, 0, 0, 1, 0);
    } else {
        void* mgr = *(void**)0x112ee48;
        SphereExcludeFilter filt(objects, flag);
        typedef bool (*Fn2)(void*, void*, void*, void*, void*, const Vec3&,
                            const Vec3&, void*, void*, float);
        Fn2 fn = (Fn2)(*(void***)mgr)[0xe0 / 8];
        dirSphere.set(to.x - from.x, to.y - from.y, to.z - from.z);
        res = fn(mgr, &info, &hitPos, &start, &extra, from, dirSphere,
                 &filt, &pred, radius);
    }

    float dx = hitPos.x - from.x;
    float dy = hitPos.y - from.y;
    float dz = hitPos.z - from.z;
    out = pred.m_maxDist < dx * dx + dy * dy + dz * dz;
    return res;
}

} } }

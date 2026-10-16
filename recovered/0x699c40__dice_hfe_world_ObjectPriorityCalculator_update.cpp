// FUNCTION: BF2 0x699c40
// BF2_FLAGS: -fno-strict-aliasing
extern "C" float sqrtf(float);
#include <vector>
namespace dice { namespace hfe { namespace world {

struct Vec3 { float x, y, z; };

typedef void* (*GetObjFn)(int);
typedef float (*GetFloatFn)(void*);
typedef void* (*GetPtrFn)(void*);
typedef void (*CollectFn)(void*, const Vec3&, std::vector<void*>&, int, float);
typedef void* (*QueryFn)(void*, unsigned int, unsigned int);
typedef Vec3* (*GetPosFn)(void*);
typedef void (*SetPriorityFn)(void*, float);

void fn_0x00699c40() {
    std::vector<void*> objects;
    void* svc = ((GetObjFn)(*(void**)((char*)*(void**)0 + 0x90)))(0);
    float radius = ((GetFloatFn)(*(void***)svc)[15])(svc);
    radius = radius + radius;
    void* svc2 = ((GetObjFn)(*(void**)((char*)*(void**)0 + 0x90)))(0);
    void* cam = ((GetPtrFn)(*(void***)svc2)[25])(svc2);
    void* mgr = *(void**)0x0112ee48;
    CollectFn cf = *(CollectFn*)((char*)*(void**)mgr + 0x80);
    Vec3* c = (Vec3*)((char*)cam + 0x30);
    float cz = c->z;
    float cy = c->y;
    float cx = c->x;
    Vec3 center;
    center.x = cx;
    center.y = cy;
    center.z = cz;
    cf(mgr, center, objects, 0, radius);
    for (std::vector<void*>::iterator it = objects.begin(); it != objects.end(); ++it) {
        void* obj = *it;
        void* prio = ((QueryFn)(*(void***)obj)[23])(obj, *(unsigned int*)0x00ca2018, *(unsigned int*)0x00bc19c0);
        if (prio == 0) continue;
        Vec3* p = ((GetPosFn)(*(void***)obj)[27])(obj);
        float dy = p->y - c->y;
        float dz = p->z - c->z;
        float dx = p->x - c->x;
        float dist = sqrtf(dx*dx + dy*dy + dz*dz);
        if (radius > dist)
            ((SetPriorityFn)(*(void***)prio)[4])(prio, radius / dist);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectPriorityCalculator_update (0x699c40)

// FUNCTION: BF2 0x536f20
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class Vec3 { public: float x; float y; float z; };
class IObject;
class ITemplate;

extern void* gameLogic;
extern unsigned int CID_SoldierTemplate;

typedef bool (*IsServerFn)(void*);
typedef unsigned int (*ClassIdFn)(void*);
typedef void* (*GetVecFn)(void*);
typedef IObject* (*GetChildFn)(void*);

typedef void (*DispatchFn)(void* gl, void* obj, float f, void* p2, void* p3, void* p4,
                            int p5, void* p6, void* p7, Vec3* p8, Vec3* p9,
                            int p10, int p11, int p12, int p13);

void damageAllAttachedSoldiers(IObject* obj, float dmg) {
    if (obj == 0) return;
    if ((*(IsServerFn*)(*(char**)gameLogic + 0x278))(gameLogic)) {
        do {
            ITemplate* t = *(ITemplate**)((char*)obj + 0x28);
            if ((*(ClassIdFn*)(*(char**)t + 0x20))(t) == CID_SoldierTemplate) {
                DispatchFn f = *(DispatchFn*)(*(char**)gameLogic + 0x1c8);
                Vec3 v2; Vec3 v1;
                v1.x = 0.0f; v1.y = 1.0f; v1.z = 0.0f;
                Vec3* s = (Vec3*)(*(GetVecFn*)(*(char**)obj + 0xd8))(obj);
                float z = s->z, y = s->y, x = s->x;
                v2.x = x; v2.y = y; v2.z = z;
                f(gameLogic, obj, dmg, 0, 0, 0, -1, 0, 0, &v2, &v1, -1, 0, 1, 0);
            }
            damageAllAttachedSoldiers((*(GetChildFn*)(*(char**)obj + 0x1e0))(obj), dmg);
            obj = *(IObject**)((char*)obj + 0x58);
        } while (obj != 0);
    }
}

void damageAllAttachedSoldiers(IObject* obj, float dmg);

} } }

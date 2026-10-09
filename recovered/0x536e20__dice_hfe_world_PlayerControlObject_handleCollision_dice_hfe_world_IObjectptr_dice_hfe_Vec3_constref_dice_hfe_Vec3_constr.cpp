// FUNCTION: BF2 0x536e20
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class Vec3 { public: float x; float y; float z; };
class IObject;
class CollisionFaceInfo;

extern void* gameLogic;

typedef bool (*IsServerFn)(void*);
typedef void (*DispatchFn)(void* gl, void* obj, float f, void* p2, void* p3, void* p4,
                            int p5, void* p6, void* p7, Vec3* p8, Vec3* p9,
                            int p10, int p11, int p12, int p13);

extern bool bundle_handle_collision(void* self, IObject* obj, Vec3 const& a, Vec3 const& b,
                                    Vec3 const& c, int i1, int i2,
                                    CollisionFaceInfo* f1, CollisionFaceInfo* f2);

class PlayerControlObject {
public:
    bool handleCollision(IObject* obj, Vec3 const& a, Vec3 const& b, Vec3 const& c,
                         int i1, int i2, CollisionFaceInfo* f1, CollisionFaceInfo* f2);
};

bool PlayerControlObject::handleCollision(IObject* obj, Vec3 const& a, Vec3 const& b,
        Vec3 const& c, int i1, int i2, CollisionFaceInfo* f1, CollisionFaceInfo* f2) {
    if (i2 == 0x29a) {
        if ((*(IsServerFn*)(*(char**)gameLogic + 0x278))(gameLogic)) {
            DispatchFn f = *(DispatchFn*)(*(char**)gameLogic + 0x1c8);
            Vec3 v2; Vec3 v1;
            v1.x = 0.0f; v1.y = 1.0f; v1.z = 0.0f;
            v2.x = 0.0f; v2.y = 0.0f; v2.z = 0.0f;
            f(gameLogic, this, 1.0e10f, 0, 0, 0, -1, 0, 0, &v2, &v1, -1, 0, 1, 0);
        }
        return true;
    }
    return bundle_handle_collision(this, obj, a, b, c, i1, i2, f1, f2);
}

}}}

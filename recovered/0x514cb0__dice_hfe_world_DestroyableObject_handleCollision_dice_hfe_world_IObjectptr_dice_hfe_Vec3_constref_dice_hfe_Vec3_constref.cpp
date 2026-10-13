// FUNCTION: BF2 0x514cb0
namespace dice { namespace hfe {
extern void* gameLogic;
namespace world {
class IObject { public: char _pad[0x1000]; };
struct Vec3 { float x, y, z; };
struct CollisionFaceInfo;
class Bundle {
public:
    bool handleCollision(IObject* a, Vec3 const& b, Vec3 const& c, Vec3 const& d, int e, int f, CollisionFaceInfo* g, CollisionFaceInfo* h);
};
class DestroyableObject : public Bundle {
public:
    char _pad[0x2000];
    virtual bool handleCollision(IObject* a, Vec3 const& b, Vec3 const& c, Vec3 const& d, int e, int f, CollisionFaceInfo* g, CollisionFaceInfo* h);
};
bool DestroyableObject::handleCollision(IObject* a, Vec3 const& b, Vec3 const& c, Vec3 const& d, int e, int f, CollisionFaceInfo* g, CollisionFaceInfo* h) {
    bool r = Bundle::handleCollision(a, b, c, d, e, f, g, h);
    char* node = (char*)this;
    void* arm = 0;
    while (node != 0) {
        arm = *(void**)(node + 0x78);
        if (arm != 0)
            break;
        node = *(char**)(node + 0x50);
    }
    if (node != 0) {
        void* w = *(void**)((char*)this + 0x80);
        if (w != 0) {
            if (!((bool (*)(void*))(*(void***)gameLogic)[0x278 / 8])(gameLogic)) {
                if (!((bool (*)(void*))(*(void***)w)[0x60 / 8])(w))
                    return false;
            }
            if (((bool (*)(void*))(*(void***)arm)[0xa8 / 8])(arm))
                return ((bool (*)(void*))(*(void***)w)[0x60 / 8])(w);
        }
    }
    return r;
}
}}}

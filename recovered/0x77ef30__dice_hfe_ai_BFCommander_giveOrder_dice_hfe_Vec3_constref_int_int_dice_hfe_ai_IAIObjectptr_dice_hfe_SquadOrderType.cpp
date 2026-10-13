// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x77ef30
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

extern void* squadManager;

namespace ai {

class IAIObject;

class BFCommander {
public:
    void giveOrder(Vec3 const& pos, int a, int b, IAIObject* obj, int type);
};

struct SquadOrderData {
    int type;
    short w;
    Vec3 v[3];
    char flag;
};

void BFCommander::giveOrder(Vec3 const& pos, int a, int b, IAIObject* obj, int type)
{
    SquadOrderData order;
    order.type = type;
    order.flag = 0;
    order.v[0] = pos;
    order.w = 0;
    if (obj != 0) {
        void* g = ((void* (*)(void*))(*(void***)obj)[8])(obj);
        void* q = ((void* (*)(void*))(*(void***)g)[0x1b0 / 8])(g);
        if (q != 0)
            order.w = *(short*)((char*)q + 8);
    }
    ((void (*)(void*, int, int, void*, int))((*(void***)squadManager)[0x90 / 8]))(squadManager, b, a, &order, 0);
}

} } }

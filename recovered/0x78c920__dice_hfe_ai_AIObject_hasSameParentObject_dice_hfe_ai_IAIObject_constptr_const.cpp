// FUNCTION: BF2 0x78c920
namespace dice { namespace hfe { namespace world {
struct IObject;
void* getRootParent(IObject const* p);
} } }

namespace dice { namespace hfe { namespace ai {

struct IVObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void* v8();
};

bool hasSameParentObject_0x78c920(void* self, void* other) {
    void* a = ((IVObj*)self)->v8();
    void* b = ((IVObj*)other)->v8();
    if (a == b) return true;
    void* ra = dice::hfe::world::getRootParent((dice::hfe::world::IObject const*)a);
    if (!ra) return false;
    return ra == dice::hfe::world::getRootParent((dice::hfe::world::IObject const*)b);
}

} } }

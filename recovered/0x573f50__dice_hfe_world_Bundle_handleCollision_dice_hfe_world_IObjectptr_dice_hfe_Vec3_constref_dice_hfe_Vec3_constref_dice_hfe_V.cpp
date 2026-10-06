// FUNCTION: BF2 0x573f50
namespace dice { namespace hfe {

struct Vec3;

namespace world {

class IObject;
struct CollisionFaceInfo;

class SimpleObject {
public:
    virtual void _m0();
    bool handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                         int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2);
};

class Bundle : public SimpleObject {
public:
    bool handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                         int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2);
};

bool Bundle::handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                             int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2)
{
    return SimpleObject::handleCollision(obj, p1, p2, p3, i1, i2, 0, 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Bundle_handleCollision_dice_hfe_world_IObjectptr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_int_int_dice_hfe_world_CollisionFaceInfoptr_dice_hfe_world_CollisionFaceInfoptr (0x573f50)

// FUNCTION: BF2 0x4a45a0
namespace dice { namespace hfe {
namespace world {
class IObject;
struct Vec3 { float x, y, z; };
class GameLogicCollision {
public:
    static void serverHandleCollisionObjectVsObject(IObject*, IObject*, Vec3 const&, Vec3 const&, Vec3 const&, int, int);
    static void serverHandleCollisionLandOrWater(IObject*, IObject*, Vec3 const&, Vec3 const&, Vec3 const&, int, int);
};
class ServerGameLogic {
public:
    void handleCollision(IObject* a, IObject* b, Vec3 const& v1, Vec3 const& v2, Vec3 const& v3, int i1, int i2);
};
void ServerGameLogic::handleCollision(IObject* a, IObject* b, Vec3 const& v1, Vec3 const& v2, Vec3 const& v3, int i1, int i2)
{
    if (!a)
        GameLogicCollision::serverHandleCollisionLandOrWater(a, b, v1, v2, v3, i1, i2);
    else
        GameLogicCollision::serverHandleCollisionObjectVsObject(a, b, v1, v2, v3, i1, i2);
}
}}}

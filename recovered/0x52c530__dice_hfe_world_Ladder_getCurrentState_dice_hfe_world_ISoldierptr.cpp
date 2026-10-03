// FUNCTION: BF2 0x52c530
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class IObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2)
    virtual IObject* queryInterface(int id);
    V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26)
    virtual const Vec3& getPosition();
    virtual void setPosition(const Vec3& p);
#undef V
};
typedef IObject ISoldier;
IObject* getRootParent(const IObject* o);
extern int g_objectInterfaceId;

class Ladder {
public:
    float getCurrentState(ISoldier* s);
    void setCurrentState(ISoldier* s, float t);
    float getAbsoluteBottom();
    float getLadderHeight();
};

float Ladder::getCurrentState(ISoldier* s)
{
    IObject* root = getRootParent(s->queryInterface(g_objectInterfaceId));
    if (!root)
        return 0.0f;
    float y = root->getPosition().y;
    float bottom = getAbsoluteBottom();
    float h = getLadderHeight();
    float r = (y - bottom) / h;
    if (r < 0.0f)
        return 0.0f;
    return r > 1.0f ? 1.0f : r;
}

} } }

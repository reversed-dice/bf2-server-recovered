// FUNCTION: BF2 0x770d20
// BF2_FLAGS: -fno-strict-aliasing
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {
class MaterialManager {
public:
    V10(0) V10(1) V(20) V(21) V(22)
    virtual void* getEffect(int mat1, int mat2, int unk);
};
extern MaterialManager* materialManager;
}

class GameLogic {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V(50) V(51) V(52) V(53) V(54) V(55)
    virtual void playEffect(Vec3 pos, void* effect, Vec3 up);
};
extern GameLogic* gameLogic;

namespace ai {

class BFGameEffector {
public:
    virtual ~BFGameEffector();
    virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4();
    virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8();
    virtual void _v9();
    virtual void playEffect(Vec3 const& pos, int mat1, int mat2);
};

void BFGameEffector::playEffect(Vec3 const& pos, int mat1, int mat2) {
    gameLogic->playEffect(pos, world::materialManager->getEffect(mat1, mat2, 0), Vec3(0.0f, 1.0f, 0.0f));
}

} } }

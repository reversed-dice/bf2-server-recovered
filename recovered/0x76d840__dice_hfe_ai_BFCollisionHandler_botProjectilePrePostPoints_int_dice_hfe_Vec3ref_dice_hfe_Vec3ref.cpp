// FUNCTION: BF2 0x76d840
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace ai {

struct BotProjectile {
    char pad[0xc];
    Vec3 pre;
    Vec3 post;
};

class BFCollisionHandler {
public:
    virtual ~BFCollisionHandler();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void botProjectilePrePostPoints(int idx, Vec3& pre, Vec3& post);

    int m_count;
    char _pad[4];
    BotProjectile** m_projectiles; // at +0x10
};

void BFCollisionHandler::botProjectilePrePostPoints(int idx, Vec3& pre, Vec3& post) {
    pre = m_projectiles[idx]->pre;
    post = m_projectiles[idx]->post;
}

} } }

// FUNCTION: BF2 0x87d9a0
namespace dice {
namespace hfe {

struct Vec3 { int x, y, z; Vec3() {} Vec3(const Vec3& o) { x = o.x; y = o.y; z = o.z; } };

class GameLogic {
public:
    void setBeforeSpawnCamera(Vec3 a, Vec3 b);
};

extern GameLogic* gameLogic;

namespace io {

class ConsoleClass199 {
public:
    void* executeObjectMethod();
    char _pad0[0x30];
    int m_type;
    Vec3* m_a;
    Vec3* m_b;
    char _pad1[0xc0];
    char m_hasArg;
};

void* ConsoleClass199::executeObjectMethod() {
    if (m_type == 2) {
        Vec3 a;
        a.z = m_a->z;
        a.y = m_a->y;
        a.x = m_a->x;
        Vec3 b;
        b.y = m_b->y;
        b.z = m_b->z;
        b.x = m_b->x;
        m_hasArg = 0;
        gameLogic->setBeforeSpawnCamera(a, b);
    }
    return 0;
}

} } }

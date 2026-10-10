// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x77f1b0
namespace dice { namespace hfe {

struct Vec2 {
    float x, y;
    Vec2() {}
    Vec2(const Vec2& o) : x(o.x), y(o.y) {}
};

class GameEvent {
public:
    GameEvent();
    char _pad0[0x10];
};

namespace ai {

class DropEvent : public dice::hfe::GameEvent {
public:
    unsigned int m_x;
    unsigned int m_y;
    unsigned char m_a;
    char _pad1[7];
    DropEvent(unsigned int x, unsigned int y, int a) {
        m_x = x;
        m_y = y;
        m_a = (unsigned char)a;
        *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2e4b0);
    }
};

class BFCommander {
public:
    virtual void dropSupply(int a, int b, dice::hfe::Vec2 p);
};

void BFCommander::dropSupply(int a, int b, dice::hfe::Vec2 p) {
    unsigned int y = *reinterpret_cast<unsigned int*>(&p.y);
    unsigned int x = *reinterpret_cast<unsigned int*>(&p.x);
    DropEvent* e = new DropEvent(x, y, a);
    void* em = *reinterpret_cast<void**>(0x010b3730);
    ((void (*)(void*, int, int, void*))((*(void***)em)[7]))(em, 0, 0xf, e);
    void* sm = *reinterpret_cast<void**>(0x010b8c00);
    ((void (*)(void*, int, int, int, int, int, int))((*(void***)sm)[9]))(sm, a, b, 0, 2, 3, 0);
}

} } }

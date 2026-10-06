// FUNCTION: BF2 0x590860
namespace dice {
namespace hfe {

struct Vec2 {
    float x, y;
    Vec2() {}
    Vec2(const Vec2& o) : x(o.x), y(o.y) {}
};

namespace world {

enum EffectProperty {};
enum EffectAffector {};

class EffectProperties {
public:
    char pad_0[0x30];
    void* pad_ptr;
    Vec2 m_properties[10][6];

    void setProperty(EffectProperty prop, EffectAffector affector, Vec2 val);
};

void EffectProperties::setProperty(EffectProperty prop, EffectAffector affector, Vec2 val) {
    float x = val.x;
    Vec2* p = &m_properties[prop][affector];
    float y = val.y;
    p->x = x;
    p->y = y;
}

}
}
}

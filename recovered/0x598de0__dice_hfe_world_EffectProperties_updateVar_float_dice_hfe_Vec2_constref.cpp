// FUNCTION: BF2 0x598de0
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe {

class Vec2 { public: float x; float y; };

namespace world {

class EffectProperties {
public:
    float updateVar(float v, const Vec2& range);
};

float EffectProperties::updateVar(float v, const Vec2& range) {
    if (range.x < range.y) {
        if (v >= range.y) return 1.0f;
        if (v < range.x) return 0.0f;
        float t = (v - range.x) / (range.y - range.x);
        if (t < 0.0f) return 0.0f;
        if (t > 1.0f) return 1.0f;
        return t;
    } else {
        if (v >= range.x) return 0.0f;
        if (v < range.y) return 1.0f;
        float t = (v - range.y) / (range.x - range.y);
        if (t < 0.0f) return 1.0f;
        if (t > 1.0f) return 0.0f;
        return 1.0f - t;
    }
}

} } }

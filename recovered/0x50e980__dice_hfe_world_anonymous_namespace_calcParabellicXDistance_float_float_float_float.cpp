// FUNCTION: BF2 0x50e980
extern "C" {
float sinf(float);
float cosf(float);
float sqrtf(float);
}

namespace dice { namespace hfe { namespace world { namespace {

float calcParabellicXDistance(float a, float b, float c, float d) {
    float s = sinf(c);
    float v = (b + b) * s / a;
    float r = sqrtf((0.5f * v) * (0.5f * v) + (d + d) / a);
    float t = v * -0.5f + r;
    return cosf(c) * b * t;
}

} } } }

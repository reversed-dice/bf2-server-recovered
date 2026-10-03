// FUNCTION: BF2 0x4f7020
namespace dice { namespace hfe {
float fn_0x4f7020(float a, float b, float t) {
    float one_minus_t = *(float*)0xb2f3bc - t;
    float bt = b * t;
    return a * one_minus_t + bt;
}
} }
// REVERSED_FUNCTION: anonymous_namespace_lerp_float_float_float_float (0x4f7020)

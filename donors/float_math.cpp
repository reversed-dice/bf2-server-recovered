// Donor: the SSE shapes. `XORPS XMM,XMM` before `CVTSI2SS` reads as a
// mystery in a diff until it is attached to the line that causes it, which is
// an int-to-float conversion with no intermediate variable to hide it.
namespace donors {

float int_to_float(int v)
{
    return (float)v;
}

float int_to_float_scaled(int v, float scale)
{
    return (float)v * scale;
}

float ratio(int a, int b)
{
    if (b == 0)
        return 0.0f;
    return (float)a / (float)b;
}

float clamp01(float v)
{
    if (v < 0.0f)
        return 0.0f;
    if (v > 1.0f)
        return 1.0f;
    return v;
}

float lerp(float a, float b, float t)
{
    return a + (b - a) * t;
}

void store_float_member(void* self, int v)
{
    *reinterpret_cast<float*>((char*)self + 0x2c) = (float)v;
}

float read_float_member_scaled(void* self, float scale)
{
    return *reinterpret_cast<float*>((char*)self + 0x30) * scale;
}

int float_to_int(float v)
{
    return (int)v;
}

float min_of(float a, float b)
{
    return a < b ? a : b;
}

float length_squared(const float* v)
{
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

}  // namespace donors

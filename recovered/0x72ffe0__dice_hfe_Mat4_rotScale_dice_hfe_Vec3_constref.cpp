// FUNCTION: BF2 0x72ffe0
namespace dice { namespace hfe {
float* eom_72ffe0(float* m, float* v) {
    m[0] = m[0] * v[0];
    m[4] = m[4] * v[0];
    m[8] = m[8] * v[0];
    m[1] = m[1] * v[1];
    m[5] = m[5] * v[1];
    m[9] = m[9] * v[1];
    m[2] = m[2] * v[2];
    m[6] = m[6] * v[2];
    m[10] = m[10] * v[2];
    return m;
}
} }
// REVERSED_FUNCTION: test (0x72ffe0)

#include <xmmintrin.h>
extern "C" float dice_hfe_world_EngineTemplate_getTorque(float v, void* self) {
    __m128 m = _mm_and_ps(_mm_set_ss(v), *(const __m128*)0x00b2bfa0);
    float t; _mm_store_ss(&t, m);
    if (t > *(float*)0x00b2f3bc) t = *(float*)0x00b2f3bc;
    float s = *(float*)0x00b26c3c;
    if (t <= *(float*)0x00b2f3bc) s = t * *(float*)0x00b26c3c;
    int i = (int)s;
    return ((*(float*)0x00b2f3bc - (s - (float)i)) * *(float*)((char*)self + 0x2a0 + i * 4) +
            (s - (float)i) * *(float*)((char*)self + 0x2a4 + i * 4)) * *(float*)((char*)self + 0x450);
}

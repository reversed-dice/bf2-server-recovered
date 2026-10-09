// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7903a0
namespace dice { namespace hfe { namespace ai {

class AIObjectShared {
public:
    void striveForRotationalSpeed(int i, float speed, float maxDelta);
};

void AIObjectShared::striveForRotationalSpeed(int i, float speed, float maxDelta) {
    void* holder = *(void**)((char*)this + 0x20);
    void* obj = *(void**)((char*)holder + 0x88);
    if (obj == 0) return;
    const float* v = ((const float* (*)(void*))(*(void***)obj)[0x19])(obj);
    float a2 = v[2], a1 = v[1], a0 = v[0];
    float tmp[3];
    tmp[0] = a0;
    tmp[1] = a1;
    tmp[2] = a2;
    float* pf = &tmp[i];
    float cur = *pf;
    if (speed > cur) {
        *pf = speed < cur + maxDelta ? speed : cur + maxDelta;
    } else {
        *pf = cur - maxDelta > speed ? cur - maxDelta : speed;
    }
    ((void (*)(void*, const float*))(*(void***)obj)[0x1b])(obj, tmp);
}

} } }

// FUNCTION: BF2 0x78eac0
// BF2_FLAGS: -fno-strict-aliasing
typedef void* (*GetV)(void*);
typedef void  (*SetV)(void*, void*);

void fn_78eac0(void* self, int i, float speed, float maxDelta)
{
    void* obj = *(void**)((char*)*(void**)((char*)self + 0x20) + 0x88);
    if (obj == 0)
        return;
    float tmp[3];
    const float* v = (const float*)((GetV)(*(void***)obj)[0xc8 / 8])(obj);
    float a2 = v[2], a1 = v[1], a0 = v[0];
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
    ((SetV)(*(void***)obj)[0xd8 / 8])(obj, tmp);
}

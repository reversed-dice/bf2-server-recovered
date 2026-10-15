// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x52aee0
extern "C" float floorf(float);
extern "C" bool fn_52a530(void*);
extern "C" float fn_52a4d0(void*);
extern "C" float fn_52a510(void*);

typedef void (*vfn_i)(void*, int);
typedef void (*vfn_f)(void*, float);
typedef void* (*vfn_r)(void*);

extern float* g_stepSize;
extern float* g_startGetOff;

#define LC (*(void**)((char*)self + 0x410))
#define ONE (*(float*)0xb2f3bc)

void fn_52aee0(void* self, float) {
    if (LC == 0) return;
    if (!fn_52a530(self)) {
        ((vfn_i)(*(void***)LC)[0x70 / 8])(LC, 2);
        ((vfn_i)(*(void***)LC)[0x60 / 8])(LC, 1);
        void* r = ((vfn_r)(*(void***)self)[0xd8 / 8])(self);
        float r4 = *(float*)((char*)r + 4);
        float b = fn_52a4d0(*(void**)((char*)self + 0x600));
        float v = (r4 - b) / (*g_stepSize * 2.0f);
        if (v > ONE) v = v - floorf(v);
        ((vfn_f)(*(void***)LC)[0x90 / 8])(LC, v);
        return;
    }
    ((vfn_i)(*(void***)LC)[0x70 / 8])(LC, 1);
    ((vfn_i)(*(void***)LC)[0x60 / 8])(LC, 2);
    float t = fn_52a510(*(void**)((char*)self + 0x600));
    void* r = ((vfn_r)(*(void***)self)[0xd8 / 8])(self);
    ((vfn_f)(*(void***)LC)[0x90 / 8])(LC, ONE - (t - *(float*)((char*)r + 4)) / *g_startGetOff);
}

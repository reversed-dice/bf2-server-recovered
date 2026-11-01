// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7632c0
#include <string>

extern "C" void* fn_0x0058c9a0(void* tpl, std::string const& name, void* obj);
extern "C" void  fn_0x00762780(void* self);
extern "C" void* fn_0x00408368(int volatile* p, int n);
extern "C" void  fn_0x00407bb8(void* rep, void* alloc);

extern char g_zero_0xba06f0;
extern char g_vt_engineSound_0xba06d0;
extern char g_vt_scaleEval_0xba0710;

typedef void  (*VFnOne)(void* self, void* arg);
typedef void  (*VFnTwo)(void* self, void* a, void* b);
typedef void  (*VFnInt)(void* self, int a);
typedef void* (*VFnGet)(void* self);

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
};

struct ScaleEvaluator {
    void* m_vptr;      // 0x00
    void* m_object;    // 0x08
    float m_scale;     // 0x10
    int   m_pad;       // 0x14
};

struct EngineSoundLayout {
    void* m_vptr;              // 0x00
    void* m_template;          // 0x08
    void* m_sounds[4];         // 0x10
    float const* m_rpmPtr;     // 0x30
    float m_rpm;               // 0x38
    float m_arr[4];            // 0x3c
    ScaleEvaluator m_eval[4];  // 0x50
    Vec3 m_velocity;           // 0xb0
    int   m_bc;                // 0xbc
    void* m_engine;            // 0xc0
    void* m_object;            // 0xc8
    unsigned char m_d0;        // 0xd0
    char  m_pad_d1[3];
    float m_d4;                // 0xd4
};

extern "C" void f_7635f0(EngineSoundLayout* s, void* tpl, void* engine, void* object,
                         void* sndTemplate, float const* rpmPtr)
{
    s->m_vptr = &g_vt_engineSound_0xba06d0;
    s->m_template = sndTemplate;
    ScaleEvaluator* ev = s->m_eval;
    for (long i = 3; i != -1; --i, ++ev) {
        ev->m_vptr = &g_vt_scaleEval_0xba0710;
        ev->m_object = 0;
        ev->m_scale = 1.0f;
    }

    s->m_velocity.set(0.0f, 0.0f, 0.0f);
    s->m_object = object;
    s->m_d4 = 0.0f;
    s->m_engine = engine;
    fn_0x00762780(s);

    s->m_rpmPtr = rpmPtr ? rpmPtr : (float const*)&g_zero_0xba06f0;
    s->m_velocity.set(0.0f, 0.0f, 0.0f);
    s->m_arr[1] = 0.0f;
    s->m_arr[2] = 0.0f;
    s->m_arr[0] = 0.0f;
    s->m_rpm = *s->m_rpmPtr;
    s->m_d0 = *(unsigned char*)((char*)tpl + 0x6f0);

    s->m_sounds[0] = fn_0x0058c9a0(tpl, std::string("Idle"), engine);
    s->m_sounds[1] = fn_0x0058c9a0(tpl, std::string("Rpm1"), engine);
    s->m_sounds[2] = fn_0x0058c9a0(tpl, std::string("Rpm2"), engine);
    s->m_sounds[3] = fn_0x0058c9a0(tpl, std::string("Load"), engine);

    if (s->m_sounds[1] != 0) {
        void* p = ((VFnGet)(*(void***)s->m_sounds[1])[0xe0 / 8])(s->m_sounds[1]);
        ((VFnInt)(*(void***)p)[0xe0 / 8])(p, 0);
    }
    if (s->m_sounds[2] != 0) {
        void* p = ((VFnGet)(*(void***)s->m_sounds[2])[0xe0 / 8])(s->m_sounds[2]);
        ((VFnInt)(*(void***)p)[0xe0 / 8])(p, 0);
    }

    for (int i = 0; i < 4; ++i) {
        if (s->m_sounds[i] != 0) {
            if (i != 3) {
                s->m_eval[i].m_object = s->m_sounds[i];
                s->m_eval[i].m_scale = 1.0f;
                ((VFnTwo)(*(void***)s->m_sounds[i])[0x88 / 8])(s->m_sounds[i], &s->m_eval[i], &s->m_arr[i]);
                ((VFnTwo)(*(void***)s->m_sounds[i])[0x98 / 8])(s->m_sounds[i], 0, &s->m_arr[i]);
            }
            ((VFnOne)(*(void***)s->m_sounds[i])[0x78 / 8])(s->m_sounds[i], s);
        }
    }
}

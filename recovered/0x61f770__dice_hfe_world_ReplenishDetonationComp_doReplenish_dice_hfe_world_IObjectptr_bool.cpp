// FUNCTION: BF2 0x61f770
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe { namespace world {

struct DetComp {
    char  pad_000[0x104];
    float m_radius;             // 0x104
    int   m_flag;               // 0x108
};

struct IO {
    char  pad_000[0x50];
    IO*   m_next;               // 0x50
    char  pad_058[0x78 - 0x58];
    void* m_hit;                // 0x78
};

struct Comp {
    char     pad_000[0x18];
    IO*      m_io;              // 0x18
    char     pad_020[0x70 - 0x20];
    DetComp* m_det;             // 0x70
};

typedef bool (*Fn8)(void*, void*, float, void*, unsigned int, int, float*, bool, int);
typedef bool (*Fn7)(void*, void*, float, void*, unsigned int, int, float*, bool);
typedef unsigned int (*FnU)(void*);
typedef void* (*FnPtr)(void*);

bool doReplenish(Comp* self, IO* obj, bool flag)
{
    float out = 0.0f;
    if (obj) {
        void* hit = obj->m_hit;
        if (!hit) {
            do {
                obj = obj->m_next;
                if (!obj)
                    return false;
            } while (!(hit = obj->m_hit));
        }
        if (self->m_det->m_radius > 0.0f &&
            ((bool (*)(void*))(*(void***)*(void**)0x010b8c08)[0x278 / 8])(*(void**)0x010b8c08)) {
            void* gl = *(void**)0x010b8c08;
            unsigned int kind = ((FnU)(*(void***)hit)[0x138 / 8])(hit);
            if (!self->m_det->m_flag) {
                return ((Fn8)(*(void***)gl)[0x208 / 8])(gl,
                         ((FnPtr)(*(void***)hit)[0x40 / 8])(hit),
                         self->m_det->m_radius,
                         ((FnPtr)(*(void***)self->m_io)[0x358 / 8])(self->m_io),
                         ((FnU)(*(void***)self->m_io)[0x1a0 / 8])(self->m_io),
                         kind, &out, flag, 0);
            }
            return ((Fn7)(*(void***)gl)[0x210 / 8])(gl,
                     ((FnPtr)(*(void***)hit)[0x40 / 8])(hit),
                     self->m_det->m_radius,
                     ((FnPtr)(*(void***)self->m_io)[0x358 / 8])(self->m_io),
                     ((FnU)(*(void***)self->m_io)[0x1a0 / 8])(self->m_io),
                     kind, &out, flag);
        }
    }
    return false;
}

} } }

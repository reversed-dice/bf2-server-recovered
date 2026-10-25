// FUNCTION: BF2 0x5375e0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" float floorf(float);

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IWeaponObject;

typedef void* (*vfn_get)(void*);
typedef void* (*vfn_query)(void*, unsigned int);
typedef float (*vfn_float1)(void*, int, float);
typedef int (*vfn_int)(void*);

typedef void** __attribute__((may_alias)) MAVoidPP;

struct ObjectList {
    void** m_start;
    void** m_finish;
};

class PlayerControlObject {
public:
    char _pad0[8];

    int calcAmmoStatus();
};

int PlayerControlObject::calcAmmoStatus()
{
    ObjectList* list = (ObjectList*)(((vfn_get)(*(void***)this)[0x3c0 / 8]))(this);

    float val = 1.0f;
    bool first = true;

    for (void** it = list->m_start; it != list->m_finish; ++it) {
        void** const& cur = it;
        void* obj = *cur;
        void* w = ((vfn_query)(*(void***)obj)[0x18 / 8])(obj, IID_IWeaponObject);
        float f = ((vfn_float1)(*(MAVoidPP*)w)[0x100 / 8])(w, 1, 100.0f);
        if (f == 100.0f)
            continue;
        if (((vfn_int)(*(MAVoidPP*)w)[0x150 / 8])(w) == -1)
            continue;

        int a = ((vfn_int)(*(MAVoidPP*)w)[0x140 / 8])(w);
        float fa = (float)a;
        int b = ((vfn_int)(*(MAVoidPP*)w)[0x130 / 8])(w);
        float fb = (float)b;

        if (fa == -1.0f || fb == -1.0f)
            continue;

        if (first) {
            val = fa / fb;
            first = false;
        } else {
            val = (fa / fb + val) * 0.5f;
        }
    }

    float t = val * 15.0f;
    if (t < 0.0f)
        t = 0.0f;
    if (t > 15.0f)
        t = 15.0f;
    return (int)floorf(t);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_calcAmmoStatus (0x5375e0)

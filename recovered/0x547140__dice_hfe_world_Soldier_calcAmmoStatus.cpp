// FUNCTION: BF2 0x547140
extern "C" float floorf(float);

namespace dice { namespace hfe { namespace world {

extern int IID_IWeaponObject;

typedef void* (*vfn_get)(void*);
typedef void* (*vfn_query)(void*, int);
typedef char (*vfn_char)(void*);
typedef int (*vfn_int)(void*);
typedef int (*vfn_int1)(void*, int);

typedef void** __attribute__((may_alias)) MAVoidPP;

struct ObjectList {
    void** m_start;
    void** m_finish;
};

class Soldier {
public:
    char _pad0[0x286];
    char m_286;
    char m_287;

    int calcAmmoStatus();
};

int Soldier::calcAmmoStatus()
{
    ObjectList* list = (ObjectList*)(((vfn_get)(*(void***)this)[0x388 / 8]))(this);

    if (list->m_start != list->m_finish) {
        float sumA, sumB;
        sumA = sumB = 0;

        for (void** it = list->m_start; it != list->m_finish; ++it) {
            void** const& cur = it;
            void* obj = *cur;
            void* w = ((vfn_query)(*(void***)obj)[0x18 / 8])(obj, IID_IWeaponObject);
            if (w == 0)
                continue;
            if (!((vfn_char)(*(MAVoidPP*)w)[0xe8 / 8])(w))
                continue;
            if (((vfn_int)(*(MAVoidPP*)w)[0x150 / 8])(w) <= 0)
                continue;

            Soldier* owner = *(Soldier**)((char*)w - 0x248);
            if (owner->m_287 != 0)
                continue;
            if (owner->m_286 != 0)
                continue;

            int a = ((vfn_int)(*(MAVoidPP*)w)[0x140 / 8])(w);
            float fa = (float)a;
            int b = ((vfn_int)(*(MAVoidPP*)w)[0x130 / 8])(w);
            float fb = (float)b;

            if (0.5f < fa && 0.5f < fb) {
                sumA += fa;
                sumB += fb;

                if (((vfn_int1)(*(MAVoidPP*)w)[0x128 / 8])(w, 0) == 0)
                    sumA -= 1.0f;
            }
        }

        if (sumB >= 1.0f) {
            float f = (sumA / sumB) * 15.0f;
            if (f < 0.0f)
                f = 0.0f;
            if (f > 15.0f)
                f = 15.0f;
            return (int)floorf(f);
        }
    }
    return 0;
}

} } }

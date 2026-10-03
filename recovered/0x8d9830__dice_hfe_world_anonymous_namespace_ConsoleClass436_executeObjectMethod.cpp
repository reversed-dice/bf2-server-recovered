// FUNCTION: BF2 0x8d9830
extern "C" unsigned _ZN4dice3hfe5world25CID_DeviationCompTemplateE;
extern "C" unsigned _ZN4dice3hfe5world32IID_IWeaponDeviationCompTemplateE;
void _ZN4dice3hfe5world21DeviationCompTemplate10setFireDevEfff_8d9830(void*, float a0, float a1, float a2);
void* _ZN4dice3hfe5world26getActiveTemplateComponentEjj_8d9830(unsigned, unsigned);

struct Obj_8d9830;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass436_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 3) {
        unsigned v0 = _ZN4dice3hfe5world25CID_DeviationCompTemplateE;
        float a0 = **(float**)(self + 0x38);
        float a1 = **(float**)(self + 0x40);
        float a2 = **(float**)(self + 0x48);
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world21DeviationCompTemplate10setFireDevEfff_8d9830(((Obj_8d9830*)_ZN4dice3hfe5world26getActiveTemplateComponentEjj_8d9830(_ZN4dice3hfe5world32IID_IWeaponDeviationCompTemplateE, v0)), a0, a1, a2);
    }
    return 0;
}

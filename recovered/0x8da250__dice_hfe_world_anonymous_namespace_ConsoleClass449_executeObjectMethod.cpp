// FUNCTION: BF2 0x8da250
extern "C" unsigned _ZN4dice3hfe5world32CID_SoldierDeviationCompTemplateE;
extern "C" unsigned _ZN4dice3hfe5world32IID_IWeaponDeviationCompTemplateE;
void _ZN4dice3hfe5world28SoldierDeviationCompTemplate10setTurnDevEffff_8da250(void*, float a0, float a1, float a2, float a3);
void* _ZN4dice3hfe5world26getActiveTemplateComponentEjj_8da250(unsigned, unsigned);

struct Obj_8da250;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass449_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        unsigned v0 = _ZN4dice3hfe5world32CID_SoldierDeviationCompTemplateE;
        float a0 = **(float**)(self + 0x38);
        float a1 = **(float**)(self + 0x40);
        float a2 = **(float**)(self + 0x48);
        float a3 = **(float**)(self + 0x50);
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world28SoldierDeviationCompTemplate10setTurnDevEffff_8da250(((Obj_8da250*)_ZN4dice3hfe5world26getActiveTemplateComponentEjj_8da250(_ZN4dice3hfe5world32IID_IWeaponDeviationCompTemplateE, v0)), a0, a1, a2, a3);
    }
    return 0;
}

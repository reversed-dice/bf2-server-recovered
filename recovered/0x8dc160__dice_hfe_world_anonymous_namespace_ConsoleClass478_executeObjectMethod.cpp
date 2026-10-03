// FUNCTION: BF2 0x8dc160
extern "C" unsigned _ZN4dice3hfe5world27CID_DefaultZoomCompTemplateE;
extern "C" unsigned _ZN4dice3hfe5world27IID_IWeaponZoomCompTemplateE;
void _ZN4dice3hfe5world23DefaultZoomCompTemplate13addZoomFactorEf_8dc160(void*, float a0);
void* _ZN4dice3hfe5world26getActiveTemplateComponentEjj_8dc160(unsigned, unsigned);

struct Obj_8dc160;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass478_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 1) {
        unsigned v0 = _ZN4dice3hfe5world27CID_DefaultZoomCompTemplateE;
        float a0 = **(float**)(self + 0x38);
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world23DefaultZoomCompTemplate13addZoomFactorEf_8dc160(((Obj_8dc160*)_ZN4dice3hfe5world26getActiveTemplateComponentEjj_8dc160(_ZN4dice3hfe5world27IID_IWeaponZoomCompTemplateE, v0)), a0);
    }
    return 0;
}

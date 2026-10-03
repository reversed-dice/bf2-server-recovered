// FUNCTION: BF2 0xa5d970
extern "C" unsigned _ZN4dice3hfe5world18CID_EngineTemplateE;
void _ZN4dice3hfe5world14EngineTemplate13setGearRatiosEfffff_a5d970(void*, float a0, float a1, float a2, float a3, float a4);
void* _ZN4dice3hfe5world17getActiveTemplateEj_a5d970(unsigned);

struct Obj_a5d970;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass64_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 5) {
        float a0 = **(float**)(self + 0x38);
        float a1 = **(float**)(self + 0x40);
        float a2 = **(float**)(self + 0x48);
        float a3 = **(float**)(self + 0x50);
        float a4 = **(float**)(self + 0x58);
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world14EngineTemplate13setGearRatiosEfffff_a5d970(((Obj_a5d970*)_ZN4dice3hfe5world17getActiveTemplateEj_a5d970(_ZN4dice3hfe5world18CID_EngineTemplateE)), a0, a1, a2, a3, a4);
    }
    return 0;
}

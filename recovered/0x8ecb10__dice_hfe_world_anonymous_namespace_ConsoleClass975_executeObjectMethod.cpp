// FUNCTION: BF2 0x8ecb10
extern "C" unsigned g_c7cf5c;
void fn_5590b0_8ecb10(void*, int a0, int a1, float a2, float a3);
void* fn_69de30_8ecb10(unsigned);

struct Obj_8ecb10;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass975_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        float a2 = **(float**)(self + 0x48);
        float a3 = **(float**)(self + 0x50);
        *(char*)(self + 0x108) = 0;
        fn_5590b0_8ecb10(((Obj_8ecb10*)fn_69de30_8ecb10(g_c7cf5c)), a0, a1, a2, a3);
    }
    return 0;
}

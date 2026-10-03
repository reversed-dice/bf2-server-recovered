// FUNCTION: BF2 0x95efc0
#include <string>
struct rec3_95efc0 { unsigned w[3]; };
extern "C" unsigned _ZN4dice3hfe5world19CID_SoldierTemplateE;
void _ZN4dice3hfe5world15SoldierTemplate24setSkeletonCollisionBoneERKSsiRKNS0_4Vec3Eff_95efc0(void*, const std::string& a0, int a1, const rec3_95efc0& a2, float a3, float a4);
void* _ZN4dice3hfe5world17getActiveTemplateEj_95efc0(unsigned);

struct Obj_95efc0;

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass273_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 5) {
        std::string a0(**(std::string**)(self + 0x38));
        int a1 = **(int**)(self + 0x40);
        const rec3_95efc0* p2 = *(const rec3_95efc0**)(self + 0x48);
        unsigned w2_2 = p2->w[2], w2_1 = p2->w[1], w2_0 = p2->w[0];
        rec3_95efc0 a2;
        a2.w[0] = w2_0; a2.w[1] = w2_1; a2.w[2] = w2_2;
        float a3 = **(float**)(self + 0x50);
        float a4 = **(float**)(self + 0x58);
        unsigned c0 = _ZN4dice3hfe5world19CID_SoldierTemplateE;
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world15SoldierTemplate24setSkeletonCollisionBoneERKSsiRKNS0_4Vec3Eff_95efc0(((Obj_95efc0*)_ZN4dice3hfe5world17getActiveTemplateEj_95efc0(c0)), a0, a1, a2, a3, a4);
    }
    return 0;
}

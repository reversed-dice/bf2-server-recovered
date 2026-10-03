// FUNCTION: BF2 0xae06b0
#include <string>

void* _ZN4dice3hfe14animationTools76_GLOBAL__N_Animation_BoneAnimation_ModuleBoneAnimation_cpp_F868B173_9517DADC16getActiveTriggerENS_4anim7Trigger11TriggerTypeE_ae06b0(unsigned int cid);
typedef const std::string& (*getfn_ae06b0)(void*);
typedef void (*setfn_ae06b0)(void*, const std::string&);

extern "C" std::string* dice_hfe_animationTools_anonymous_namespace_ConsoleClass233_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = _ZN4dice3hfe14animationTools76_GLOBAL__N_Animation_BoneAnimation_ModuleBoneAnimation_cpp_F868B173_9517DADC16getActiveTriggerENS_4anim7Trigger11TriggerTypeE_ae06b0(0x5);
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_ae06b0*)(*(char**)p + 0xb0))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        unsigned int cid = 0x5;
        *(unsigned char*)(self + 0x108) = 0;
        void* p = _ZN4dice3hfe14animationTools76_GLOBAL__N_Animation_BoneAnimation_ModuleBoneAnimation_cpp_F868B173_9517DADC16getActiveTriggerENS_4anim7Trigger11TriggerTypeE_ae06b0(cid);
        (*(setfn_ae06b0*)(*(char**)p + 0xa8))(p, a);
    }
    return result;
}

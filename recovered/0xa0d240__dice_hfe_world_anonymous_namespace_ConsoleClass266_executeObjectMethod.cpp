// FUNCTION: BF2 0xa0d240
#include <string>

void* _ZN4dice3hfe5world70_GLOBAL__N_Game_Objects_Fx_ModuleWorldObjTemplFx_cpp_DB52B4BA_3894986629getParticleSystemTemplateBaseEv_a0d240();
typedef const std::string& (*getfn_a0d240)(void*);
typedef void (*setfn_a0d240)(void*, const std::string&);

extern "C" std::string* dice_hfe_world_anonymous_namespace_ConsoleClass266_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = _ZN4dice3hfe5world70_GLOBAL__N_Game_Objects_Fx_ModuleWorldObjTemplFx_cpp_DB52B4BA_3894986629getParticleSystemTemplateBaseEv_a0d240();
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_a0d240*)(*(char**)p + 0x208))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        *(unsigned char*)(self + 0x108) = 0;
        void* p = _ZN4dice3hfe5world70_GLOBAL__N_Game_Objects_Fx_ModuleWorldObjTemplFx_cpp_DB52B4BA_3894986629getParticleSystemTemplateBaseEv_a0d240();
        (*(setfn_a0d240*)(*(char**)p + 0x200))(p, a);
    }
    return result;
}

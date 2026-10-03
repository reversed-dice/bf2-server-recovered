// FUNCTION: BF2 0xac9410
#include <string>
namespace dice { namespace hfe {
extern "C" char dice_hfe_tool_objectTemplateAdm;
extern "C" void dice_hfe_tool_ObjectTemplateAdm_setActiveObjectTemplate_std_string_constref(char*, std::string const&, void*);

long cb(long p) {
    if (*(int*)(p + 0x30) != 2) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    void* arg2 = **(void***)(p + 0x40);
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    dice_hfe_tool_ObjectTemplateAdm_setActiveObjectTemplate_std_string_constref(
        &dice_hfe_tool_objectTemplateAdm, s, arg2);
    return 0;
}
} }

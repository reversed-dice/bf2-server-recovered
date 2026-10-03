// FUNCTION: BF2 0xac84f0
#include <string>
namespace dice { namespace hfe {
extern "C" char dice_hfe_tool_objectTemplateAdm;
extern "C" bool dice_hfe_tool_ObjectTemplateAdm_saveAllUsedTemplates_std_string_constref(char*, std::string const&);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 1) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x10a;
        *(char*)(p + 0x108) = 1;
        *(char*)(p + 0x10a) = dice_hfe_tool_ObjectTemplateAdm_saveAllUsedTemplates_std_string_constref(
            &dice_hfe_tool_objectTemplateAdm, s);
    }
    return r;
}
} }

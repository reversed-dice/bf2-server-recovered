// FUNCTION: BF2 0xac53c0
#include <string>
namespace dice { namespace hfe {
extern "C" char dice_hfe_tool_objectTemplateAdm;
extern "C" void dice_hfe_tool_ObjectTemplateAdm_createNewLayer_std_string_constref(char*, std::string const&);

long cb(long p) {
    if (*(int*)(p + 0x30) != 1) return 0;
    std::string s(**(std::string**)(p + 0x38));
    *(char*)(p + 0x108) = 0;
    dice_hfe_tool_ObjectTemplateAdm_createNewLayer_std_string_constref(&dice_hfe_tool_objectTemplateAdm, s);
    return 0;
}
} }

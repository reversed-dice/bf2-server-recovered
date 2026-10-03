// FUNCTION: BF2 0xac6c90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
extern "C" char dice_hfe_tool_objectTemplateAdm;
extern "C" int dice_hfe_tool_ObjectTemplateAdm_saveFolderToArchive_std_string_constref_bool_bool(char*, std::string const&, bool, bool);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 3) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x10c;
        // PERM_ORDER
        bool b1 = **(bool**)(p + 0x40);
        bool b2 = **(bool**)(p + 0x48);
        *(char*)(p + 0x108) = 1;
        // PERM_ORDER_END
        *(int*)(p + 0x10c) = dice_hfe_tool_ObjectTemplateAdm_saveFolderToArchive_std_string_constref_bool_bool(
            &dice_hfe_tool_objectTemplateAdm, s, b1, b2);
    }
    return r;
}
} }

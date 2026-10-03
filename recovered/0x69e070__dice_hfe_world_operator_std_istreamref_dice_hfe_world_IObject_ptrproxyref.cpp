// FUNCTION: BF2 0x69e070
#include <string>

extern "C" {
    void* dice_hfe_world_objectManager;
    int dice_hfe_compareIgnoreCase_char_constptr_char_constptr_int(const char* a, const char* b, int n);
    long __strtol_internal(const char* nptr, char** endptr, int base, int group);
}

namespace dice { namespace hfe { namespace world {

std::istream& operator_0x69e070(std::istream& is, void** out) {
    std::string s;
    is >> s;
    if (dice_hfe_compareIgnoreCase_char_constptr_char_constptr_int(s.c_str(), "obj#", 2) == 0) {
        unsigned int id = (unsigned int)__strtol_internal(s.c_str() + 2, 0, 10, 0);
        typedef void* (*GetByIdFn)(void*, unsigned int);
        *out = ((GetByIdFn)(*(void***)dice_hfe_world_objectManager)[0x60/8])(dice_hfe_world_objectManager, id);
    } else {
        typedef void* (*LookupFn)(void*, const std::string&);
        *out = ((LookupFn)(*(void***)dice_hfe_world_objectManager)[0x48/8])(dice_hfe_world_objectManager, s);
    }
    return is;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_istreamref_dice_hfe_world_IObject_ptrproxyref (0x69e070)

// FUNCTION: BF2 0xae59d0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
extern "C" char* dice_hfe_animationTools_anonymous_namespace_getActiveBundleManager();
extern "C" void* dice_anim_BundleManager_createBundle_std_string_constref(char*, std::string const&);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 1) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x110;
        *(char*)(p + 0x108) = 1;
        char* b = dice_hfe_animationTools_anonymous_namespace_getActiveBundleManager();
        *(void**)(p + 0x110) = dice_anim_BundleManager_createBundle_std_string_constref(b, s);
    }
    return r;
}
} }

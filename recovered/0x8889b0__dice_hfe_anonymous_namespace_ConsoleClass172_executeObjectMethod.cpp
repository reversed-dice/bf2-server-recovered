// FUNCTION: BF2 0x8889b0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
extern "C" char* dice_hfe_anonymous_namespace_getVoiceMessages();
extern "C" int dice_hfe_VoiceMessages_playRadioMessage_std_string_constref(char*, std::string const&);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 1) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x10c;
        *(char*)(p + 0x108) = 1;
        char* v = dice_hfe_anonymous_namespace_getVoiceMessages();
        *(int*)(p + 0x10c) = dice_hfe_VoiceMessages_playRadioMessage_std_string_constref(v, s);
    }
    return r;
}
} }

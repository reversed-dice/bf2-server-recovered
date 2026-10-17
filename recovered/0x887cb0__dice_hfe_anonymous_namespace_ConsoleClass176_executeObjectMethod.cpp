// FUNCTION: BF2 0x887cb0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
extern "C" char* dice_hfe_anonymous_namespace_getVoiceMessages();
extern "C" int dice_hfe_VoiceMessages_playRadioMessage(char*, int, std::string const&, std::string const&, std::string const&);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 4) {
        int a0 = **(int**)(p + 0x38);
        std::string a1(**(std::string**)(p + 0x40));
        std::string a2(**(std::string**)(p + 0x48));
        std::string a3(**(std::string**)(p + 0x50));
        *(char*)(p + 0x108) = 1;
        char* v = dice_hfe_anonymous_namespace_getVoiceMessages();
        int rv = dice_hfe_VoiceMessages_playRadioMessage(v, a0, a1, a2, a3);
        *(int*)(p + 0x10c) = rv;
        r = p + 0x10c;
    }
    return r;
}
} }

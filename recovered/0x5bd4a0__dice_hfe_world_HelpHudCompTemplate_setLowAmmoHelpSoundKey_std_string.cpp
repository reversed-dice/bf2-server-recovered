// FUNCTION: BF2 0x5bd4a0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void setLowAmmoHelpSoundKey(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::setLowAmmoHelpSoundKey(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x80), s);
    *(unsigned char*)((char*)this + 0x8b) = 1;
}
} } }

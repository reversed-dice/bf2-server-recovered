// FUNCTION: BF2 0x5bd440
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void HelpHudCompTemplate_setAltHelpSoundKey(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::HelpHudCompTemplate_setAltHelpSoundKey(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x30), s);
    *(unsigned char*)((char*)this + 0x89) = 1;
}
} } }

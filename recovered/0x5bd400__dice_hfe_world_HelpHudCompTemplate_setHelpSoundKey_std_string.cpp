// FUNCTION: BF2 0x5bd400
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void HelpHudCompTemplate_setHelpSoundKey(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::HelpHudCompTemplate_setHelpSoundKey(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x20), s);
    *(unsigned char*)((char*)this + 0x88) = 1;
}
} } }

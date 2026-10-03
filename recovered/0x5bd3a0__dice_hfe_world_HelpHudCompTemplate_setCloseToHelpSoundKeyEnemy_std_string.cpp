// FUNCTION: BF2 0x5bd3a0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void HelpHudCompTemplate_setCloseToHelpSoundKeyEnemy(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::HelpHudCompTemplate_setCloseToHelpSoundKeyEnemy(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x60), s);
    *(unsigned char*)((char*)this + 0x8e) = 1;
}
} } }

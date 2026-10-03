// FUNCTION: BF2 0x4167f0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void HelpHudCompTemplate_setCloseToHelpStringKeyEnemy(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::HelpHudCompTemplate_setCloseToHelpStringKeyEnemy(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x10), s);
    *(unsigned char*)((char*)this + 0x26) = 1;
}
} } }

// REVERSED_FUNCTION: dice_hfe_MapInfo_setMapName_std_string_constref (0x4167f0)

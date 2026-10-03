// FUNCTION: BF2 0x5bd480
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    void setLowArmorHelpStringKey(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void HelpHudCompTemplate::setLowArmorHelpStringKey(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x68), s);
    *(unsigned char*)((char*)this + 0x8a) = 1;
}
} } }

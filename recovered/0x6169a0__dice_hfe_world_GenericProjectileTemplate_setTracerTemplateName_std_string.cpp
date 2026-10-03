// FUNCTION: BF2 0x6169a0
#include <string>

namespace dice { namespace hfe { namespace world {
class GenericProjectileTemplate {
public:
    void setTracerTemplateName(const std::string& s);
};
extern void std_string_assign_408238(std::string* self, const std::string& s);
void GenericProjectileTemplate::setTracerTemplateName(const std::string& s) {
    std_string_assign_408238((std::string*)((char*)this + 0x240), s);
    *(unsigned long long*)((char*)this + 0x248) = 0;
}
} } }

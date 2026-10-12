// FUNCTION: BF2 0xac5fa0
#include <string>

namespace dice { namespace hfe { namespace tool {
extern char const* DefaultLayer;
struct ObjectTemplateAdm {
    void setActiveLayer(std::string const&);
};
extern ObjectTemplateAdm objectTemplateAdm;
} } }

extern "C" void* eom(void* self) {
    int mode = *(int*)((char*)self + 0x30);
    if (mode == 0) {
        *(char*)((char*)self + 0x108) = 0;
        dice::hfe::tool::objectTemplateAdm.setActiveLayer(std::string(dice::hfe::tool::DefaultLayer));
    } else if (mode == 1) {
        std::string s(*(std::string const*)*(void**)((char*)self + 0x38));
        *(char*)((char*)self + 0x108) = 0;
        dice::hfe::tool::objectTemplateAdm.setActiveLayer(s);
    } else {
        return 0;
    }
    return 0;
}

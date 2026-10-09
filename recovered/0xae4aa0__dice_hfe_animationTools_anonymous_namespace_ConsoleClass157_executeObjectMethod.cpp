// FUNCTION: BF2 0xae4aa0
#include <string>

namespace dice { namespace anim {

class ValueHolderManager {
public:
    std::string const& getActiveByName() const;
    void setActiveByName(std::string const& name);
};

extern ValueHolderManager* valueHolderManager;

} }

namespace dice { namespace hfe { namespace animationTools { namespace anonymous_namespace {

void* executeObjectMethod(void* base) {
    char* self = (char*)base;
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(dice::anim::valueHolderManager->getActiveByName());
        return (std::string*)(self + 0x110);
    }
    if (mode != 1) return 0;
    std::string s(*(const std::string*)*(void**)(self + 0x38));
    *(unsigned char*)(self + 0x108) = 0;
    dice::anim::valueHolderManager->setActiveByName(s);
    return 0;
}

} } } }

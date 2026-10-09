// FUNCTION: BF2 0xae5380
#include <string>

namespace dice { namespace anim {

class TriggerManager {
public:
    std::string const& getActiveTrigger() const;
    void setActiveTrigger(std::string const& name, void* trigger);
};

} }

namespace dice { namespace hfe { namespace animationTools { namespace anonymous_namespace {

dice::anim::TriggerManager* getActiveTriggerManager();

void* executeObjectMethod(void* base) {
    char* self = (char*)base;
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(getActiveTriggerManager()->getActiveTrigger());
        return (std::string*)(self + 0x110);
    }
    if (mode != 1) return 0;
    std::string s(*(const std::string*)*(void**)(self + 0x38));
    *(unsigned char*)(self + 0x108) = 0;
    getActiveTriggerManager()->setActiveTrigger(s, 0);
    return 0;
}

} } } }

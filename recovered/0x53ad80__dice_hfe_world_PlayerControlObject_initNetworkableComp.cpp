// FUNCTION: BF2 0x53ad80
#include <string>

// dice::hfe::world::PlayerControlObject::initNetworkableComp() -- 0x53ad80
//
// Objects without the entry at +0x50 defer to the base implementation. The
// others register the networkable component unless their template's name
// (vtable +0x128) is the empty tag.

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace world {
extern void baseInitNetworkableComp_53ad80(void*);
extern void setNetworkableComp_53ad80(void*, unsigned);
} } }

typedef std::string* (*FnName_53ad80)(void*);

extern "C" void initNetworkableComp_53ad80(char* self)
{
    // template read before the +0x50 test: the target hoists it above the branch
    void* tmpl = *(void**)(self + 0x28);
    if (*(void**)(self + 0x50) == 0) {
        dice::hfe::world::baseInitNetworkableComp_53ad80(self);
        return;
    }
    if (tmpl == 0) return;
    std::string* name = (*(FnName_53ad80*)(*(char**)tmpl + 0x128))(tmpl);
    if (name->compare(&DAT_00bb25f1) != 0)
        dice::hfe::world::setNetworkableComp_53ad80(self, *(unsigned*)0xc75ec0);
}
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_initNetworkableComp (0x53ad80)

// FUNCTION: BF2 0x7859c0
#include <string>
#include <ostream>
#include <new>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

// Debug carries its ostream at +0x20 and is 0x180 bytes in total; modelling
// that size is what makes the frame match.
struct Debug_7859c0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7859c0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7859c0();
};

namespace ai {

// Declared, not defined: the target CALLs it, so this is a relocation.
void ctor_7859c0(void* self, void* tmpl, void* obj);

} } }

extern "C" void* create_7859c0(void* obj, void* tmpl)
{
    void* p = ::operator new(0x18);
    dice::hfe::ai::ctor_7859c0(p, tmpl, obj);
    if (p == 0) {
        dice::hfe::Debug_7859c0(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                                std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
    return p;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateCover_createPlugIn_dice_hfe_ai_IAIObjectptr_dice_hfe_ai_AITemplateptr (0x7859c0)

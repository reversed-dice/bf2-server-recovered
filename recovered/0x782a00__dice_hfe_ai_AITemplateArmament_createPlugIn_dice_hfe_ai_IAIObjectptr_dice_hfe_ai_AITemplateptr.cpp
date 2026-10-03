// FUNCTION: BF2 0x782a00
#include <string>
#include <ostream>
#include <new>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

// Debug carries its ostream at +0x20 and is 0x180 bytes in total; modelling
// that size is what makes the frame match.
struct Debug_782a00 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_782a00(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_782a00();
};

namespace ai {

// Declared, not defined: the target CALLs it, so this is a relocation.
void ctor_782a00(void* self, void* tmpl, void* obj);

} } }

extern "C" void* create_782a00(void* obj, void* tmpl)
{
    void* p = ::operator new(0x70);
    dice::hfe::ai::ctor_782a00(p, tmpl, obj);
    if (p == 0) {
        dice::hfe::Debug_782a00(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                                std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
    return p;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateArmament_createPlugIn_dice_hfe_ai_IAIObjectptr_dice_hfe_ai_AITemplateptr (0x782a00)

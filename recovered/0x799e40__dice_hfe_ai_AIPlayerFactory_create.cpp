// FUNCTION: BF2 0x799e40
#include <string>
#include <ostream>
#include <new>

// dice_hfe_ai_AIPlayerFactory_create
// Allocate, construct, guard on null, return. The allocation is split into
// ::operator new plus a declared-only constructor so the null test survives.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_799e40 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_799e40(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_799e40();
};

// Declared, not defined: the target CALLs it, so this is a relocation.
void dice_hfe_ai_AIPlayer_AIPlayer_799e40(void* self);

} }

extern "C" void* factory_799e40()
{
    void* p = ::operator new(0x18);
    dice::hfe::dice_hfe_ai_AIPlayer_AIPlayer_799e40(p);
    if (p == 0) {
        dice::hfe::Debug_799e40(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                         std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
    return p;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayerFactory_create (0x799e40)

// FUNCTION: BF2 0x4bfb30
#include <string>
#include <ostream>

// dice_hfe_ClientSquadManager_popNextCommanderApplicant_int
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_4bfb30 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_4bfb30(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_4bfb30();
};

} }

extern "C" unsigned long debugguard_4bfb30()
{
    dice::hfe::Debug_4bfb30(6, std::string("Game/GameLogic/SquadManager/ClientSquadManager.cpp"), 0xd4,
                     std::string(&DAT_00bb25f1)).os
        << "ClientSquadManager::popNextCommanderApplicant should not be called on client.";
    return 0xffffffff;
}
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_popNextCommanderApplicant_int (0x4bfb30)

// FUNCTION: BF2 0x560200
#include <string>
#include <ostream>

// dice_hfe_world_TargetObject_removeFromNametagManager
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_560200 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_560200(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_560200();
};

} }

extern "C" void debugguard_560200()
{
    dice::hfe::Debug_560200(6, std::string("Game/Objects/Game/TargetObject.cpp"), 0x14b,
                     std::string(&DAT_00bb25f1)).os
        << "SingletonServer::getINametagManager()->removeItem(geom::TTTarget, this);";
}
// REVERSED_FUNCTION: dice_hfe_world_TargetObject_removeFromNametagManager (0x560200)

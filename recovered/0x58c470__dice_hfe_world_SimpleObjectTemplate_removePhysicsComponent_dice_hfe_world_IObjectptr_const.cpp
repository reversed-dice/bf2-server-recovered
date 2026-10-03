// FUNCTION: BF2 0x58c470
#include <string>
#include <ostream>

// dice_hfe_world_SimpleObjectTemplate_removePhysicsComponent_dice_hfe_world_IObjectptr_const
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_58c470 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_58c470(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_58c470();
};

} }

extern "C" void debugguard_58c470()
{
    dice::hfe::Debug_58c470(6, std::string("Game/Objects/Base/SimpleObjectTemplate.cpp"), 0x1e9,
                     std::string(&DAT_00bb25f1)).os
        << "Removing physicsComponent, not physicsNodeComponent!";
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_removePhysicsComponent_dice_hfe_world_IObjectptr_const (0x58c470)

// FUNCTION: BF2 0x77c1e0
#include <string>
#include <ostream>

// dice_hfe_ai_BFTerrain_getMaterial_float_float_const
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_77c1e0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_77c1e0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_77c1e0();
};

} }

extern "C" unsigned long debugguard_77c1e0()
{
    dice::hfe::Debug_77c1e0(6, std::string("AI/AIInterface/BFKnowledge/BFTerrain.cpp"), 0x6f,
                     std::string(&DAT_00bb25f1)).os
        << "Not implemented";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getMaterial_float_float_const (0x77c1e0)

// FUNCTION: BF2 0x788340
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace ai { namespace {

int pcoIdToPositionSelect(int v)
{
    switch (v)
    {
    case 0: return 0x17;
    case 1: return 0x18;
    case 2: return 0x19;
    case 3: return 0x1a;
    case 4: return 0x1b;
    case 5: return 0x1c;
    case 6: return 0x1d;
    case 7: return 0x1e;
    default:
        dice::hfe::Debug(6, std::string("AI/AIInterface/BFKnowledge/AITemplateUnit.cpp"), 0x42,
                         std::string(&DAT_00bb25f1)).os
            << "No valid PcoId found at position:" << (int)v;
        return 0x40;
    }
}

} } } }

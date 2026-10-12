// FUNCTION: BF2 0x4a5cb0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {
namespace {

void setAllUnlockLevels(std::map<int, int>* levels, int count)
{
    for (int i = 0; i <= 7; ++i) {
        levels[0][i] = 99;
        levels[1][i] = 99;
    }
}

}
}}

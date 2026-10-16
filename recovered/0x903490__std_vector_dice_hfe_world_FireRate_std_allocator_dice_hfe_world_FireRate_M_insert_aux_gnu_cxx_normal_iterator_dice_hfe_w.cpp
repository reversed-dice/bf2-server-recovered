// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x903490
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <memory>
#include <algorithm>

namespace dice { namespace hfe { namespace world {
enum FireRate { FR_X = 0 };
} } }

template class std::vector<dice::hfe::world::FireRate>;

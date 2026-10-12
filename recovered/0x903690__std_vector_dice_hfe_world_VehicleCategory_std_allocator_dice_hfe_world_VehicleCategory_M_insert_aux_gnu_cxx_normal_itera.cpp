// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x903690
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <memory>
#include <algorithm>

namespace dice { namespace hfe {
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };
struct Mat4 { float m[16]; };
namespace world { enum VehicleCategory { VC_X = 0 }; }
} }

template class std::vector<dice::hfe::world::VehicleCategory>;

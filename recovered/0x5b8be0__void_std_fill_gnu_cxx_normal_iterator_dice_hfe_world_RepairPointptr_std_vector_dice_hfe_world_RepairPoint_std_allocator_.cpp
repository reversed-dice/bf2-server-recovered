// FUNCTION: BF2 0x5b8be0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::RepairPoint*, std::vector<dice::hfe::world::Repa

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

} }

namespace dice { namespace hfe { namespace world {

struct RepairPoint {
    Vec3 pos;
    float radius;
    RepairPoint() {}
};

} } }

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::RepairPoint*, std::vector<dice::hfe::world::RepairPoint, std::allocator<dice::hfe::world::RepairPoint> > >, dice::hfe::world::RepairPoint>(__gnu_cxx::__normal_iterator<dice::hfe::world::RepairPoint*, std::vector<dice::hfe::world::RepairPoint, std::allocator<dice::hfe::world::RepairPoint> > >, __gnu_cxx::__normal_iterator<dice::hfe::world::RepairPoint*, std::vector<dice::hfe::world::RepairPoint, std::allocator<dice::hfe::world::RepairPoint> > >, dice::hfe::world::RepairPoint const&);

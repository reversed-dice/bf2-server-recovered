// FUNCTION: BF2 0x77ba60
#include <utility>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };

namespace ai {

class BFTerrain {
public:
    bool pointInsideBbox(const Vec3& pt, const std::pair<Vec2, Vec2>& bbox) const;
};

bool BFTerrain::pointInsideBbox(const Vec3& pt, const std::pair<Vec2, Vec2>& bbox) const {
    const Vec2& b2 = bbox.second;
return (pt.x >= bbox.first.x && pt.z >= bbox.first.y && b2.x >= pt.x && b2.y >= pt.z);
}

} } }

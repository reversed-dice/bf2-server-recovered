// FUNCTION: BF2 0x70e240
// BF2_FLAGS: -fno-strict-aliasing
#include <algorithm>
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class BspBuilderFace
{
public:
    float m_axes[3];
};

struct AxisSort
{
    int m_axis;
    AxisSort(int axis) : m_axis(axis) {}
    bool operator()(BspBuilderFace* const& a, BspBuilderFace* const& b) const
    {
        return a->m_axes[m_axis] < b->m_axes[m_axis];
    }
};

} // namespace world
} // namespace hfe
} // namespace dice

void bspSortFaces(std::vector<dice::hfe::world::BspBuilderFace*>& faces, int axis)
{
    std::sort(faces.begin(), faces.end(), dice::hfe::world::AxisSort(axis));
}

void bspHeapFaces(std::vector<dice::hfe::world::BspBuilderFace*>& faces, int axis)
{
    std::make_heap(faces.begin(), faces.end(), dice::hfe::world::AxisSort(axis));
    std::sort_heap(faces.begin(), faces.end(), dice::hfe::world::AxisSort(axis));
}

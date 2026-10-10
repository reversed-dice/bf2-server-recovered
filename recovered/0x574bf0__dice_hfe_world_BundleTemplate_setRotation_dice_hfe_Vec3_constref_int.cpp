// FUNCTION: BF2 0x574bf0
#include <vector>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };
struct Vec4 { float x, y, z, w; };
struct Mat4 { Vec4 r[4]; };

void setRotationZXY(Mat4& m, float a, float b, float c);

} }

namespace dice { namespace hfe { namespace world {

struct BundleChild {
    char _pad[0x1c];
    dice::hfe::Mat4 m_matrix;
};

class BundleTemplate {
public:
    void setRotation(dice::hfe::Vec3 const& v, int index);

    char _pad[0x1d8];
    std::vector<BundleChild*> m_children;
};

void BundleTemplate::setRotation(dice::hfe::Vec3 const& v, int index)
{
    if (index < 0 || index >= (int)m_children.size()) {
        return;
    }
    BundleChild* child = m_children[index];
    dice::hfe::setRotationZXY(child->m_matrix, -v.z, -v.y, -v.x);
}

} } }

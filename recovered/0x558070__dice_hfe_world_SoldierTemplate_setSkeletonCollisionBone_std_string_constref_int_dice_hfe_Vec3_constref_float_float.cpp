// FUNCTION: BF2 0x558070
#include <string>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace anim {
class Skeleton {
public:
    void setSkeletonCollisionBone(std::string const& name, int idx, Vec3 const& v, float f1, float f2);
};
}
namespace world {
class SoldierTemplate {
public:
    char pad[0x2c0];
    anim::Skeleton* m_2c0;
    void setSkeletonCollisionBone(std::string const& name, int idx, Vec3 const& v, float f1, float f2);
};
void SoldierTemplate::setSkeletonCollisionBone(std::string const& name, int idx, Vec3 const& v, float f1, float f2)
{
    if (m_2c0)
        m_2c0->setSkeletonCollisionBone(name, idx, v, f1, f2);
}
} } }

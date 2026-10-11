// FUNCTION: BF2 0x6c7950
#include <string>

namespace dice { namespace hfe { class Vec3; } }

namespace dice { namespace anim {

class BoneManager {
public:
    static BoneManager* getInstance();
    short getBoneNameIndex(std::string const& name);
};

class Skeleton {
public:
    void setSkeletonCollisionBone(std::string const& name, int a, dice::hfe::Vec3 const& v, float f1, float f2);
    void setSkeletonCollisionBone(short idx, int a, dice::hfe::Vec3 const& v, float f1, float f2);
};

void Skeleton::setSkeletonCollisionBone(std::string const& name, int a, dice::hfe::Vec3 const& v, float f1, float f2)
{
    short idx = BoneManager::getInstance()->getBoneNameIndex(name);
    setSkeletonCollisionBone(idx, a, v, f1, f2);
}

} }

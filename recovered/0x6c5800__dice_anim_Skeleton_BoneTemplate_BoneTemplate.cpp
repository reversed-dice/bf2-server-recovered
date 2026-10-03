// FUNCTION: BF2 0x6c5800
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe { struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} }; }
namespace anim {

class Skeleton {
public:
    struct BoneTemplate {
        int id;
        short parent;
        short sibling;
        int _pad8;
        hfe::Vec3 offset;
        float scale;
        float sign;
        BoneTemplate();
    };
};

Skeleton::BoneTemplate::BoneTemplate()
    : id(-1), parent(-1), sibling(-1), scale(1.0f), sign(-1.0f)
{
}

} }

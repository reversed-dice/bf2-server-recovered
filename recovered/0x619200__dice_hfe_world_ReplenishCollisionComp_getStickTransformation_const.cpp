// FUNCTION: BF2 0x619200
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

struct Mat4 {
    float m[16];
    static Mat4 const& getIdentity();
};

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

} }

extern "C" Mat4 const& getStickTransformation_impl(void* self)
{
    (void)self;
    dice::hfe::Debug(0x6,
                     std::string("Game/Objects/Projectiles/CollisionComponents/ReplenishCollisionComp.h"),
                     0x47, std::string(&DAT_00bb25f1)).os
        << "Dummy mat";
    return Mat4::getIdentity();
}

// FUNCTION: BF2 0x6149c0
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

typedef Mat4 const& (*GetStickFn)(void*);

extern "C" Mat4 const& getStickTransformation_impl(void* self)
{
    void* p = *(void**)((char*)self + 0x260);
    if (p) {
        return ((GetStickFn)(*(void***)p)[0x80 / 8])(p);
    }
    dice::hfe::Debug(0x6, std::string("Game/Objects/Projectiles/GenericProjectile.cpp"),
                     0x78d, std::string(&DAT_00bb25f1)).os
        << "Default impl";
    return Mat4::getIdentity();
}

// FUNCTION: BF2 0x6a8bf0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
};

namespace world { class IObjectTemplate; }

namespace tool {

class ObjectTemplateAdm {
public:
    void createObject(const world::IObjectTemplate* tmpl);
    void createObject(const world::IObjectTemplate* tmpl, const Vec3& pos, const Vec3& dir);
};

void ObjectTemplateAdm::createObject(const world::IObjectTemplate* tmpl)
{
    createObject(tmpl, Vec3(), Vec3());
}

} } }

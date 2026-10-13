// FUNCTION: BF2 0x6879f0
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    void set(float a, float b, float c) { x = a; y = b; z = c; }
};
namespace world {
class IObject;
void setBoundRadiusIsDirty(IObject* o);
namespace {
void transformationWasUpdated(IObject* o);
}
class Object {
public:
    void setRelativePosition(Vec3 const& p);
private:
    char _pad00[0x50];
    void* m_50;
    char _pad58[0x100];
    void* m_158;
};
void Object::setRelativePosition(Vec3 const& p)
{
    if (!m_50)
        return;
    float dz = ((Vec3*)((char*)m_158 + 0x30))->z - p.z;
    float dy = ((Vec3*)((char*)m_158 + 0x30))->y - p.y;
    float dx = ((Vec3*)((char*)m_158 + 0x30))->x - p.x;
    if (dx * dx + dy * dy + dz * dz > 0.0001f)
        setBoundRadiusIsDirty((IObject*)this);
    ((Vec3*)((char*)m_158 + 0x30))->set(p.x, p.y, p.z);
    transformationWasUpdated((IObject*)this);
}
}}}

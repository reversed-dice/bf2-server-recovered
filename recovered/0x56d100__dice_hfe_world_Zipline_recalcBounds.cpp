// FUNCTION: BF2 0x56d100
// BF2_FLAGS: -fno-tree-dominator-opts
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
struct Bounds { Vec3 min; Vec3 max; };
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
class IGeometry {
public:
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    virtual bool isLoaded(int lod);
    V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21)
    virtual const Bounds* getBounds(int lod);
};
class Zipline {
public:
    V10(0) V10(1) V(20) V(21) V(22) V(23) V(24) V(25) V(26)
    virtual const Vec3& getPosition();
#undef V10
#undef V
    void recalcBounds();
    char _pad8[0x78];
    IGeometry* m_geometry;
    char _pad88[0x1d4];
    bool m_boundsValid;
    char _pad25d[0x3];
    float m_height;
    char _pad264[0x4];
    float m_top;
    float m_bottom;
};

void Zipline::recalcBounds()
{
    IGeometry* g = m_geometry;
    if (g && g->isLoaded(0)) {
        const Bounds* b = g->getBounds(0);
        if (b) {
            m_height = b->max.y - b->min.y;
            m_top = getPosition().y + b->max.y;
            m_bottom = getPosition().y + b->min.y;
        }
    }
    m_boundsValid = false;
}

} } }

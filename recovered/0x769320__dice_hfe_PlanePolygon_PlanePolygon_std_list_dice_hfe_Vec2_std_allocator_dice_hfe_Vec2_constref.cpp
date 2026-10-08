// FUNCTION: BF2 0x769320
#include <list>
namespace dice { namespace hfe {
struct Vec2 { float x, y; };
struct Mat4 { float m[16]; };
class PlanePolygon {
public:
    virtual ~PlanePolygon();
    virtual void fromTransform(Mat4 const&) const;
    virtual void setVertices(std::list<Vec2>&);
    virtual void getVertices() const;
    virtual void getScaledVertices(std::list<Vec2>&, Vec2 const&) const;
    virtual void intersects(Vec2 const&, Vec2 const&) const;
    virtual void isInside(Vec2 const&, Vec2 const&) const;
    std::list<Vec2> m_vertices;
    PlanePolygon(std::list<Vec2> const& v);
};
} }
dice::hfe::PlanePolygon::PlanePolygon(std::list<dice::hfe::Vec2> const& v) {
    m_vertices.assign(v.begin(), v.end());
}

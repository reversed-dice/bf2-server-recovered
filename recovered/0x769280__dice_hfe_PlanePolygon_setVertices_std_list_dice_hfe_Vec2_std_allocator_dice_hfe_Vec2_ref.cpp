// FUNCTION: BF2 0x769280
#include <list>
struct Vec2 { float x; float y; };

struct PlanePolygon {
    char pad0[8];
    std::list<Vec2> m_vertices;
    void setVertices(const std::list<Vec2>& v);
};

void PlanePolygon::setVertices(const std::list<Vec2>& v) {
    m_vertices.clear();
    m_vertices.assign(v.begin(), v.end());
}

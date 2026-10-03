// FUNCTION: BF2 0x707ee0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} };
namespace world {

class BspNode {
public:
    BspNode();
    int m_plane;
    BspNode* m_parent;
    Vec3 m_min;
    Vec3 m_max;
    BspNode* m_front;
    BspNode* m_back;
};

BspNode::BspNode()
    : m_plane(0), m_parent(0), m_front(0), m_back(0)
{
}

} } }

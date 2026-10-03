// FUNCTION: BF2 0x708050
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

class BspNode {
public:
    struct Face;
    BspNode();
    void addFace(Face* f);
    int m_plane;
    Face** m_faces;
    char _pad10[0x28];
};

class Bsp {
public:
    BspNode* allocateNewBspNode(std::vector<BspNode::Face*>& faces);
    BspNode::Face** allocateNewFaceList(int count);
    char _pad0[0x44];
    int m_nodeCount;
    char _pad48[0x28];
    int m_faceCount;
};

BspNode* Bsp::allocateNewBspNode(std::vector<BspNode::Face*>& faces)
{
    ++m_nodeCount;
    m_faceCount += faces.size();
    BspNode* n = new BspNode();
    n->m_faces = allocateNewFaceList(faces.size());
    for (std::vector<BspNode::Face*>::iterator it = faces.begin(); it != faces.end(); ++it)
        n->addFace(*it);
    return n;
}

} } }

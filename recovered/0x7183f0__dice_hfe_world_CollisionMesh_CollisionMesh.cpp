// FUNCTION: BF2 0x7183f0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

} }

namespace dice { namespace hfe { namespace world {

class ICollisionMesh {
public:
    ICollisionMesh();
};

class CollisionMesh : public ICollisionMesh {
public:
    char _pad[0x8];
    int m_state;
    virtual void v0();
    CollisionMesh();
};

CollisionMesh::CollisionMesh() : ICollisionMesh()
{
    m_state = 1;
    dice::hfe::Debug(6, std::string("Physics/CollisionMesh.cpp"), 31, std::string(&DAT_00bb25f1)).os
        << "Need collsion mesh template as argument";
}

} } }

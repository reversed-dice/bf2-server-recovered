// FUNCTION: BF2 0x77a8a0
#include <vector>
#include <list>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace ai {

template <typename T1, typename T2, typename T3>
struct triple {
    T1 first;
    T2 second;
    T3 third;
};

class IAIObjectEnvironment {
public:
    struct Mesh {
        ~Mesh();
        std::vector<Vec3> vertices;
        std::vector<std::pair<int, int> > edges;
        std::list<triple<int, int, int> > triangles;
    };
};

IAIObjectEnvironment::Mesh::~Mesh() {
}

} } }

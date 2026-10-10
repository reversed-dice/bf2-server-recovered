// FUNCTION: BF2 0x6bb310
#include <vector>

namespace dice {
namespace hfe {
namespace world {
class IObject;
}
}

namespace anim {

class RagDoll {
public:
    static std::vector<dice::hfe::world::IObject*> m_objects;
    static void restoreCollidingObjects();
};

void RagDoll::restoreCollidingObjects() {
    m_objects.resize(0);
}

}
}

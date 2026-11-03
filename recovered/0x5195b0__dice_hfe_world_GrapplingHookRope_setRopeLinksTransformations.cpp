
// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5195b0
#include <vector>

namespace dice { namespace hfe { namespace world {

class RopeLink {
public:
    bool setTransformation();
};

class GrapplingHookRope {
public:
    char pad[0x270];
    std::vector<RopeLink*> m_ropeLinks;
    void setRopeLinksTransformations();
};

void GrapplingHookRope::setRopeLinksTransformations()
{
    for (std::vector<RopeLink*>::iterator it = m_ropeLinks.begin() + 1;
         it != m_ropeLinks.end() - 1; it++) {
        (*it)->setTransformation();
    }
}

} } }

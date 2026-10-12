// FUNCTION: BF2 0x509720
#include <string>

namespace dice { namespace hfe { namespace io {
    class IStream;
} } }

namespace dice { namespace anim {
    class Skeleton {
    public:
        char _pad[0x80];
        Skeleton(const std::string&, bool*, dice::hfe::io::IStream*);
        ~Skeleton();
    };
} }

namespace dice { namespace hfe { namespace world {

class AnimatedBundleTemplate {
public:
    void skeleton(const std::string& skeleton);

    char _pad[0x1F8];
    dice::anim::Skeleton* m_skeleton;
};

void AnimatedBundleTemplate::skeleton(const std::string& skeleton) {
    bool success;
    dice::anim::Skeleton* pSkeleton = new dice::anim::Skeleton(skeleton, &success, 0);
    this->m_skeleton = pSkeleton;
    if (success) {
        return;
    }
    if (pSkeleton) {
        delete pSkeleton;
    }
    this->m_skeleton = 0;
}

} } }

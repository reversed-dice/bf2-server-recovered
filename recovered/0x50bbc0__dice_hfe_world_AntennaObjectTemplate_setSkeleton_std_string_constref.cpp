// FUNCTION: BF2 0x50bbc0
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
    class AntennaObjectTemplate {
    public:
        void setSkeleton(const std::string& skeleton);
    private:
        char _pad[0x1D0];
        void* m_unk_0x1D0;
    };

    void AntennaObjectTemplate::setSkeleton(const std::string& skeleton) {
        bool success;
        dice::anim::Skeleton* pSkeleton = new dice::anim::Skeleton(skeleton, &success, 0);
        this->m_unk_0x1D0 = pSkeleton;
        if (success) {
            return;
        }
        if (pSkeleton) {
            delete pSkeleton;
        }
        this->m_unk_0x1D0 = 0;
    }
} } }
// REVERSED_FUNCTION: dice::hfe::world::AntennaObjectTemplate::setSkeleton_std_string_constref (0x50bbc0)
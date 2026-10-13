// FUNCTION: BF2 0x6bdf50
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io { class IStream; } } }

namespace dice { namespace anim {

class Skeleton {
    public:
        char _pad[0x80];
        Skeleton(const std::string&, bool*, dice::hfe::io::IStream*);
        ~Skeleton();
};

class RagDollTemplate {
public:
    char _pad[0x108];
    Skeleton* m_skeleton;

    void skeleton(std::string const& name);
};

void RagDollTemplate::skeleton(std::string const& name)
{
    if (m_skeleton == 0) {
        bool ok;
        Skeleton* s = new Skeleton(name, &ok, 0);
        m_skeleton = s;
        if (!ok) {
            delete s;
            m_skeleton = 0;
        }
    }
}

} }

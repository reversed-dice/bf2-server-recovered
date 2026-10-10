// FUNCTION: BF2 0x6b5530
#include <string>
namespace dice { namespace anim {
class BoneAnimation {
public:
    bool m_loaded;
    void cleanup();
    bool load(std::string const& file);
    bool reload(std::string const& file);
};
bool BoneAnimation::reload(std::string const& file) {
    bool ok = false;
    if (m_loaded) {
        cleanup();
        m_loaded = false;
        load(file);
        ok = true;
    }
    return ok;
}
} }

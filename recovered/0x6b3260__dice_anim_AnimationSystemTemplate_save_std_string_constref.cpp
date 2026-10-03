// FUNCTION: BF2 0x6b3260
#include <string>
namespace dice { namespace hfe { namespace io {
enum FileMode {};
enum FileAccess {};
class IStream;
class File {
public:
    File();
    ~File();
    bool open(const std::string& name, FileMode mode, FileAccess access, unsigned int flags);
    IStream* getStream();
    void close();
    char _pad[0x10];
};
} }
namespace anim {

class CameraSpring { public: void makeScript(hfe::io::IStream* s); };
class BundleManager { public: void makeScript(hfe::io::IStream* s); };
class TriggerManager { public: void makeScript(hfe::io::IStream* s); };

class AnimationSystemTemplate {
public:
    void save(const std::string& name);
    void* _vptr0;
    TriggerManager* m_triggers;
    BundleManager* m_bundles;
    CameraSpring* m_cameraSpring;
};

void AnimationSystemTemplate::save(const std::string& name)
{
    hfe::io::File f;
    f.open(name, (hfe::io::FileMode)0, (hfe::io::FileAccess)2, 0);
    hfe::io::IStream* s = f.getStream();
    if (m_cameraSpring)
        m_cameraSpring->makeScript(s);
    m_bundles->makeScript(s);
    m_triggers->makeScript(s);
    f.close();
}

} }

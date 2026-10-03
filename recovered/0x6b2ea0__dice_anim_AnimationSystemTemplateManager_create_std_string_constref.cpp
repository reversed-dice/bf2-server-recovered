// FUNCTION: BF2 0x6b2ea0
#include <string>
namespace dice { namespace hfe {
namespace io {
enum FileMode {};
enum FileAccess {};
class IStream {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18(); virtual void _v20();
    virtual void write(const char* data, int size);
};
class File {
public:
    File();
    ~File();
    bool open(const std::string& name, FileMode mode, FileAccess access, unsigned int flags);
    IStream* getStream();
    void close();
    char _pad[0x10];
};
}
}
namespace anim {

class AnimationSystemTemplateManager {
public:
    void create(const std::string& name);
};

void AnimationSystemTemplateManager::create(const std::string& name)
{
    hfe::io::File f;
    f.open(name, (hfe::io::FileMode)0, (hfe::io::FileAccess)2, 0);
    f.getStream()->write("animationSystem.createTrigger Trigger completeTree", 50);
    f.close();
}

} }

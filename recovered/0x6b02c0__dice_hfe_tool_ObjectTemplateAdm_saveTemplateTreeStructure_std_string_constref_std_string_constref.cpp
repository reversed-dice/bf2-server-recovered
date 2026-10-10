// FUNCTION: BF2 0x6b02c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

namespace world {
class IObjectTemplate;
class ObjectTemplateManager {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8();
    virtual const IObjectTemplate* getRootTemplate();
};
extern ObjectTemplateManager* objectTemplateManager;
}

namespace io {
enum FileMode {};
enum FileAccess {};
class IStream {
public:
    virtual void s0();
};
class File {
public:
    File();
    ~File();
    bool open(const std::string& name, FileMode mode, FileAccess access, unsigned int flags);
    IStream* getStream();
    char _pad[0x10];
};
}

namespace tool {
class ObjectTemplateAdm {
public:
    bool saveTemplateTreeStructure(const std::string& first, const std::string& fileName);
    void saveTreeStructure(io::IStream* stream, const world::IObjectTemplate* t, int depth);
};

bool ObjectTemplateAdm::saveTemplateTreeStructure(const std::string&, const std::string& fileName) {
    bool ok = false;
    const world::IObjectTemplate* root = world::objectTemplateManager->getRootTemplate();
    if (root == 0) {
        return ok;
    }
    io::File file;
    if (file.open(fileName, static_cast<io::FileMode>(0), static_cast<io::FileAccess>(2), 0)) {
        ok = true;
        saveTreeStructure(file.getStream(), root, 0);
    }
    return ok;
}

} } }

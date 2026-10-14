// FUNCTION: BF2 0x706980
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void release();
    virtual void v3();
    virtual void v4();
    virtual int write(void* buf, int size);
};

class IFileManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual IStream* open(const std::string& name, int a, int b, int c);
};

extern IFileManager* fileManager;

}}}

namespace dice { namespace hfe { namespace world {

class HeightmapEditable {
public:
    bool saveMaterialData(const std::string& name) const;
};

}}}

bool dice::hfe::world::HeightmapEditable::saveMaterialData(const std::string& name) const
{
    using namespace dice::hfe::io;
    if (*(void**)((char*)this + 0xd0) == 0)
        return false;
    IStream* s = fileManager->open(name, 0, 2, 0);
    if (s == 0)
        return false;
    int n = *(int*)((char*)this + 0x28) * *(int*)((char*)this + 0x2c) * *(int*)((char*)this + 0xcc);
    int w = s->write(*(void**)((char*)this + 0xd0), n);
    s->release();
    return n == w;
}

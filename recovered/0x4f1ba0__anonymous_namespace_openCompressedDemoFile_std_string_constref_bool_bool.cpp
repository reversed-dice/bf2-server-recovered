// FUNCTION: BF2 0x4f1ba0
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void vslot0();
    virtual void vslot1();
    virtual void release();
};

class IFileManager {
public:
    virtual void vslot0();
    virtual void vslot1();
    virtual void vslot2();
    virtual void vslot3();
    virtual void vslot4();
    virtual void vslot5();
    virtual IStream* open(std::string const& name, int mode, int access, unsigned int flags);
};

class ZStream {
public:
    virtual void vz0();
    virtual void vz1();
    char _pad[0x20];
    enum ZStreamMode { ZSM_0, ZSM_1 };
    ZStream(IStream* s, ZStreamMode m);
};

extern IFileManager* fileManager;

} } }

namespace dice { namespace hfe {

using dice::hfe::io::ZStream;
using dice::hfe::io::IStream;

namespace {

ZStream* openCompressedDemoFile(std::string const& name, bool a, bool b)
{
    IStream* s;
    if (a)
        s = io::fileManager->open(name, (unsigned char)(b ^ 1), 2, 0);
    else
        s = io::fileManager->open(name, 2, 0, 0);
    ZStream* z = 0;
    if (s != 0) {
        z = new ZStream(s, (ZStream::ZStreamMode)(unsigned char)(a ^ 1));
        s->release();
    }
    return z;
}

}

} }

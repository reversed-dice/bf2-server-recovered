// FUNCTION: BF2 0x802b40
#include <string>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem;

class UnixFileStream {
public:
    UnixFileStream(UnixFileSystem& fs);
    bool open(std::string const& path, int mode, int access, unsigned int flags);
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char m_pad[0x28];
};

class UnixFileSystem {
public:
    UnixFileStream* open(std::string const& path, int mode, int access, unsigned int flags);
};

UnixFileStream* UnixFileSystem::open(std::string const& path, int mode, int access, unsigned int flags) {
    UnixFileStream* fs = new UnixFileStream(*this);
    if (fs == 0)
        return 0;
    if (!fs->open(path, mode, access, flags)) {
        fs->release();
        return 0;
    }
    return fs;
}

} } }

// FUNCTION: BF2 0x802d30
#include <string>

namespace dice { namespace hfe {
std::string extractFilePath(std::string const& path, char sep);
namespace io {

class UnixFileSystem;

class UnixFileStream {
public:
    UnixFileStream(UnixFileSystem& fs);
    bool open(std::string const& path, int mode, int access, unsigned int flags);
    void write(void const* src, unsigned int len);
    ~UnixFileStream();
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char m_pad[0x28];
};

class UnixFileSystem {
public:
    bool writeFile(std::string const& path, void const* buf, unsigned int len, bool append);
    void createDirectory(std::string const& path);
};

void fixUnixPath(std::string& path);

bool UnixFileSystem::writeFile(std::string const& path, void const* buf, unsigned int len, bool append) {
    std::string s(path);
    fixUnixPath(s);
    createDirectory(extractFilePath(s, '/'));
    UnixFileStream stream(*this);
    bool ok = false;
    if (stream.open(s, append ? 0 : 1, 2, 0)) {
        stream.write(buf, len);
        ok = true;
    }
    return ok;
}

} } }

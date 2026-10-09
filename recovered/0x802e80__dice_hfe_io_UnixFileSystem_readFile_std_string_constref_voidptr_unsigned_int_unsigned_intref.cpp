// FUNCTION: BF2 0x802e80
#include <string>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem;

class UnixFileStream {
public:
    UnixFileStream(UnixFileSystem& fs);
    bool open(std::string const& path, int mode, int access, unsigned int flags);
    unsigned int getSize();
    unsigned int read(void* dst, unsigned int len);
    ~UnixFileStream();
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char m_pad[0x28];
};

class UnixFileSystem {
public:
    bool readFile(std::string const& path, void* buf, unsigned int len, unsigned int& out);
};

void fixUnixPath(std::string& path);

bool UnixFileSystem::readFile(std::string const& path, void* buf, unsigned int len, unsigned int& out) {
    std::string s(path);
    fixUnixPath(s);
    UnixFileStream stream(*this);
    if (!stream.open(s, 2, 0, 0)) {
        out = 0;
        return 0;
    }
    unsigned int n = stream.getSize();
    if (n > len)
        n = len;
    out = stream.read(buf, n);
    return 1;
}

} } }

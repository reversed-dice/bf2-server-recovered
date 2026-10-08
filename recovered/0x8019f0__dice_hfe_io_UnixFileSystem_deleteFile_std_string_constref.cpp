// FUNCTION: BF2 0x8019f0
#include <string>
#include <unistd.h>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool deleteFile(std::string const& path);
};

void fixUnixPath(std::string& path);

bool UnixFileSystem::deleteFile(std::string const& path) {
    std::string s(path);
    fixUnixPath(s);
    int r = unlink(s.c_str());
    return r != -1;
}

} } }

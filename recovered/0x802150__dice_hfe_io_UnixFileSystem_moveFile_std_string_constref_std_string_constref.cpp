// FUNCTION: BF2 0x802150
#include <string>
#include <stdio.h>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool moveFile(std::string const& src, std::string const& dst);
};

void fixUnixPath(std::string& path);

bool UnixFileSystem::moveFile(std::string const& src, std::string const& dst) {
    std::string a(src);
    std::string b(dst);
    fixUnixPath(a);
    fixUnixPath(b);
    bool ok = true;
    int r = rename(a.c_str(), b.c_str());
    if (r == -1) {
        (void)(a + " -> " + b);
        ok = false;
    }
    return ok;
}

} } }

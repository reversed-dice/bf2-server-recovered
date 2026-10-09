// FUNCTION: BF2 0x801a70
#include <string>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool fileExists(std::string const& path);
};

void fixUnixPath(std::string& path);
extern "C" int __xstat(int ver, const char* path, void* buf);

bool UnixFileSystem::fileExists(std::string const& path) {
    std::string s(path);
    fixUnixPath(s);
    char st[0x90];
    bool ok = false;
    if (__xstat(1, s.c_str(), st) != -1)
        ok = true;
    return ok;
}

} } }

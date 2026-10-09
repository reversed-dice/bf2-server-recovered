// FUNCTION: BF2 0x801f80
#include <string>
#include <unistd.h>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool copyFile(std::string const& src, std::string const& dst, bool failIfExists);
};

void fixUnixPath(std::string& path);

bool UnixFileSystem::copyFile(std::string const& src, std::string const& dst, bool failIfExists) {
    std::string a(src);
    std::string b(dst);
    fixUnixPath(a);
    fixUnixPath(b);
    bool ok = true;
    typedef bool (*VFileExists)(void*, std::string const&);
    if (failIfExists && ((VFileExists*)(*(void***)this))[7](this, b)) {
        ok = false;
    } else {
        int r = link(a.c_str(), b.c_str());
        if (r == -1) {
            (void)(a + " -> " + b);
            ok = false;
        }
    }
    return ok;
}

} } }

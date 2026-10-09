// FUNCTION: BF2 0x801910
#include <string>

namespace dice { namespace hfe { namespace io {

struct FileInfo {
    std::string m_name;
};

class UnixFileSystem {
public:
    bool getFileInfo(std::string const& path, FileInfo& info);
};

void fixUnixPath(std::string& path);
extern "C" int __xstat(int ver, const char* path, void* buf);
namespace { void buildFileInfo(FileInfo* fi, void const* st); }

bool UnixFileSystem::getFileInfo(std::string const& path, FileInfo& info) {
    std::string s(path);
    fixUnixPath(s);
    char st[0x90];
    bool ok = false;
    if (__xstat(1, s.c_str(), st) != -1) {
        ok = true;
        info.m_name.assign(path);
        buildFileInfo(&info, st);
    }
    return ok;
}

} } }

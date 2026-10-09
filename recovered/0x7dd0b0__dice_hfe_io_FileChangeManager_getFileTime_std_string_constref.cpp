// FUNCTION: BF2 0x7dd0b0
#include <string>

namespace dice { namespace hfe { namespace io {

struct FileInfo {
    std::string m_name;
    char m_pad[0x18];
    unsigned long long m_time;
};

class FileManager {
public:
    bool getFileInfo(std::string const& path, FileInfo& info);
};

extern FileManager* fileManager;

class FileChangeManager {
public:
    unsigned long long getFileTime(std::string const& path);
};

unsigned long long FileChangeManager::getFileTime(std::string const& path) {
    FileInfo info;
    typedef bool (*VGetFileInfo)(void*, std::string const&, void*);
    unsigned long long r = 0;
    if (((VGetFileInfo*)(*(void***)fileManager))[0x70 / 8](fileManager, path, &info))
        r = info.m_time;
    return r;
}

} } }

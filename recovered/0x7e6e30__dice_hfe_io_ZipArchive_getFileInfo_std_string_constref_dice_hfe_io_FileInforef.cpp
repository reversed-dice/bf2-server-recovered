// FUNCTION: BF2 0x7e6e30
#include <string>

namespace dice { namespace hfe { namespace io {

struct FileInfo {
    std::string m_name;
    bool m_isDirectory;
    unsigned int m_size;
    unsigned long long m_created;
    unsigned long long m_modified;
    unsigned long long m_accessed;
};

class ZipArchive {
public:
    char _pad[0x20];
    std::string m_ext;
    bool checkAndFixPathToFitZip(std::string& path);
    void* findEntry(const std::string& path);
    bool getFileInfo(const std::string& name, FileInfo& info);
};

} } }

bool dice::hfe::io::ZipArchive::getFileInfo(const std::string& name, dice::hfe::io::FileInfo& info)
{
    std::string path(name);
    if (!checkAndFixPathToFitZip(path))
        return false;
    void* e = findEntry(path);
    if (!e)
        return false;
    info.m_name.assign(name);
    info.m_isDirectory = false;
    info.m_size = (unsigned int)*(unsigned long long*)((char*)e + 0x38);
    info.m_created = 0;
    info.m_accessed = 0;
    info.m_modified = 0;
    return true;
}

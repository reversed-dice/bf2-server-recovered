// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7e1b00
#include <string>
#include <map>
#include <list>
#include <vector>

namespace dice { namespace hfe { namespace io {
class IArchive;
class IFileSystem;

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class FileManager {
public:
    FileManager();
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    void addPath(std::string const& path);

    int m_refCount;
    std::map<std::string, std::string, NoCaseStringCompare> m_pathMap;
    IFileSystem* m_baseSystem;
    std::vector<IArchive*> m_archives;
    std::list<std::string> m_pathList;
    std::map<std::string, std::vector<IArchive*>, NoCaseStringCompare> m_archiveMap;
    std::string m_str;
    std::list<int> m_mergeDirs;
    int m_fileResolveMode;
    bool m_b1;
    bool m_b2;
};

FileManager::FileManager()
    : m_refCount(1), m_baseSystem(0), m_fileResolveMode(0), m_b1(false), m_b2(false)
{
    addPath(std::string(""));
}
}}}

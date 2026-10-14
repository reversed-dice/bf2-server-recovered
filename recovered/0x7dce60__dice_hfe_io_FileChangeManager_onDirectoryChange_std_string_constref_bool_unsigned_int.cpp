// FUNCTION: BF2 0x7dce60
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe {

bool equalsIgnoreCase(std::string const&, std::string const&);

extern void* g_system;

namespace io {

class IFileChangeManager {
public:
    virtual ~IFileChangeManager() {}
};

class IDirectoryChangeListener {
public:
    virtual ~IDirectoryChangeListener() {}
};

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class FileChangeManager : public IFileChangeManager, public IDirectoryChangeListener {
public:
    struct File {
        void* m_p;
        void* m_pad[3];
    };
    struct DirChange {
        std::string m_name;
        float m_time;
    };

    void* m_10;
    std::map<std::string, std::vector<File>, NoCaseStringCompare> m_18;
    std::vector<std::string> m_48;
    bool m_60;
    std::vector<DirChange> m_68;

    void onDirectoryChange(std::string const& dirName, bool, unsigned int);
};

void FileChangeManager::onDirectoryChange(std::string const& dirName, bool, unsigned int)
{
    if (m_68.size() < 11) {
        typedef double (*GetTimeFn)(void*);
        float now = (float)((GetTimeFn)(*(void***)g_system)[6])(g_system);
        for (std::vector<DirChange>::iterator it = m_68.begin(); it != m_68.end(); ++it) {
            if (equalsIgnoreCase(it->m_name, dirName)) {
                it->m_time = now;
                return;
            }
        }
        DirChange change;
        change.m_name = dirName;
        change.m_time = now;
        m_68.push_back(change);
    }
}

} } }

// FUNCTION: BF2 0x7dc940
#include <string>
#include <vector>
#include <map>

namespace dice { namespace hfe { namespace io {

class IFileChangeManager {
public:
    virtual ~IFileChangeManager() {}
};

class IDirectoryChangeListener {
public:
    virtual ~IDirectoryChangeListener() {}
};

class IReleasable {
public:
    virtual void d0();
    virtual void d1();
    virtual void release();
};

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class FileChangeManager : public IFileChangeManager, public IDirectoryChangeListener {
public:
    struct File {
        IReleasable* m_p;
        void* m_pad[3];
    };
    struct DirChange {
        std::string m_name;
        int m_b;
    };

    void* m_10;
    std::map<std::string, std::vector<File>, NoCaseStringCompare> m_18;
    std::vector<std::string> m_48;
    bool m_60;
    std::vector<DirChange> m_68;

    void removeAll();
    virtual ~FileChangeManager();
};

void FileChangeManager::removeAll()
{
    for (std::map<std::string, std::vector<File>, NoCaseStringCompare>::iterator it = m_18.begin(); it != m_18.end(); ++it) {
        for (std::vector<File>::iterator f = it->second.begin(); f != it->second.end(); ++f)
            f->m_p->release();
    }
    m_18.clear();
    m_60 = true;
}

}}}

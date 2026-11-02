// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7e23b0
#include <string>
#include <list>
#include <vector>
#include <map>

namespace dice { namespace hfe {

class LoadStat {
public:
    void setCurrentFile(std::string const& file);
    void incLoadCounter(int n);
};
extern LoadStat* loadStat;

void fixPathDelimiters(std::string& path, char sep);
std::string extractFilePath(std::string const& path, char sep);
std::string getFixPath(std::string const& path, char sep);
void goUpInPath(std::string& path);

namespace io {

class IArchive;
class IFileSystem;

namespace {
void expandPath(std::string path, std::string const& base, std::string* out, IFileSystem* fs);
}

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class IFileSystem {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual bool readFile(std::string const& name, void* buf, unsigned int size, unsigned int& out);
};

class IArchive {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual bool readFile(std::string const& name, void* buf, unsigned int size, unsigned int& out);
};

class FileManager {
public:
    virtual bool readFile(std::string const& name, void* buf, unsigned int size, unsigned int& out);
    char _pad0[0x38];
    IFileSystem* m_baseSystem;
    char _pad1[0x60];
    std::list<std::string> m_mergeDirs;
    std::vector<IArchive*>* findArchives(std::string const& path);
};

bool FileManager::readFile(std::string const& name, void* buf, unsigned int size, unsigned int& out)
{
    std::string path(name);
    fixPathDelimiters(path, '/');
    expandPath(path, std::string(""), &path, m_baseSystem);
    goUpInPath(path);
    std::string fix(getFixPath(extractFilePath(path, '/'), '/'));
    std::vector<IArchive*>* archives = findArchives(fix);
    if (archives != 0) {
        for (std::vector<IArchive*>::iterator it = archives->begin(); it != archives->end(); ++it) {
            if ((*it)->readFile(path, buf, size, out)) {
                loadStat->incLoadCounter(1);
                return true;
            }
        }
    }
    for (std::list<std::string>::iterator it = m_mergeDirs.begin(); it != m_mergeDirs.end(); ++it) {
        std::string sub;
        sub = *it + path;
        if (m_baseSystem->readFile(sub, buf, size, out)) {
            loadStat->incLoadCounter(1);
            return true;
        }
    }
    return false;
}

} } }

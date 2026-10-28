// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7e2f20
#include <string>
#include <map>
#include <list>
#include <vector>

namespace dice { namespace hfe {

class LoadStat {
public:
    void setCurrentFile(std::string const& file);
    void incLoadCounter(int n);
};
extern LoadStat* loadStat;

std::string extractFilePath(std::string const& path, char sep);
std::string getFixPath(std::string const& path, char sep);
void goUpInPath(std::string& path);

namespace io {

void removeBf2ContentPart(std::string& path);

class IArchive;
class IFileSystem;
class IFile;

namespace {
void expandPath(std::string path, std::string const& base, std::string* out, IFileSystem* fs);
}

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class IFile {
public:
    virtual void v0();
    virtual void v1();
    virtual void close();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(void const* data, unsigned int len);
};

class IFileSystem {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual IFile* open(std::string const& name, int mode, int access, unsigned int flags);
};

class IArchive {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual IFile* open(std::string const& name, int mode, int access, unsigned int flags);
};

class FileManager {
public:
    FileManager();
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual std::string v36(std::string const& name);
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41(std::string const& name, std::string& out);
    virtual IFile* open(std::string const& name, int mode, int access, unsigned int flags);

    std::vector<IArchive*>* findArchives(std::string const& path);

    int m_refCount;
    std::map<std::string, std::string, NoCaseStringCompare> m_pathMap;
    IFileSystem* m_baseSystem;
    std::vector<IArchive*> m_archives;
    std::list<std::string> m_pathList;
    std::map<std::string, std::vector<IArchive*>, NoCaseStringCompare> m_archiveMap;
    std::string m_str;
    std::list<std::string> m_mergeDirs;
    int m_fileResolveMode;
    bool m_b1;
    bool m_b2;
};

IFile* FileManager::open(std::string const& name, int mode, int access, unsigned int flags)
{
    bool const noCache = mode != 2 || access == 2;
    if (noCache || access == 1) {
        std::string path;
        v41(name, path);
        dice::hfe::loadStat->incLoadCounter(1);
        return m_baseSystem->open(path, mode, access, flags);
    }

    {
        m_b1 = false;
        std::string path(v36(name));
        expandPath(path, std::string(""), &path, m_baseSystem);
        goUpInPath(path);
        removeBf2ContentPart(path);
        std::string fix(getFixPath(extractFilePath(path, '/'), '/'));
        std::vector<IArchive*>* archives = findArchives(fix);
        if (archives != 0) {
            for (std::vector<IArchive*>::iterator it = archives->begin(); it != archives->end(); ++it) {
                IFile* file = (*it)->open(path, mode, access, flags);
                if (file != 0) {
                    dice::hfe::loadStat->setCurrentFile(path);
                    dice::hfe::loadStat->incLoadCounter(1);
                    m_b1 = true;
                    __typeof__(file) __perm_t = file;
                    return __perm_t;
                }
            }
        }
    }

    if (m_fileResolveMode == 1) {
        if (name.find("@HOME@", 0, 6) == std::string::npos
            && name.find("@ROOT@", 0, 6) == std::string::npos
            && name.find("png", 0, 3) == std::string::npos)
            return 0;
    }

    std::string copy(name);
    for (std::list<std::string>::iterator it = m_mergeDirs.begin(); it != m_mergeDirs.end(); ++it) {
        std::string sub;
        expandPath(copy, *it, &sub, m_baseSystem);
        m_b1 = false;
        IFile* file = m_baseSystem->open(sub, mode, access, flags);
        if (file != 0) {
            dice::hfe::loadStat->setCurrentFile(sub);
            dice::hfe::loadStat->incLoadCounter(1);
            return file;
        }
    }
    return 0;
}

} } }

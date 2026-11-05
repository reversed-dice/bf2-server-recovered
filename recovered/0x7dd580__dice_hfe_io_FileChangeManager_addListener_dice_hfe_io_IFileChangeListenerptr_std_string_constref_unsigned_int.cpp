// FUNCTION: BF2 0x7dd580
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>
#include <map>
#include <strings.h>

namespace dice { namespace hfe {

void fixPathDelimiters(std::string& path, char sep);
std::string extractFilePath(std::string const& path, char sep);
std::string getFixPath(std::string const& path, char sep);
std::string extractFileName(std::string const& path);

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

class IFileChangeListener {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

extern void* fileManager;

class FileChangeManager : public IFileChangeManager, public IDirectoryChangeListener {
public:
    struct File {
        IFileChangeListener* m_listener;
        std::string m_name;
        unsigned int m_flags;
        unsigned long long m_time;
    };

    int m_10;
    bool m_14;
    std::map<std::string, std::vector<File>, NoCaseStringCompare> m_18;
    std::vector<std::string> m_48;
    bool m_60;

    void init();
    bool addPath(std::string const& path);
    unsigned long long getFileTime(std::string const& path);
    std::string addListener(IFileChangeListener* listener, std::string const& path, unsigned int flags);
};

std::string FileChangeManager::addListener(IFileChangeListener* listener, std::string const& path, unsigned int flags)
{
    if (!m_14)
        init();
    if (path.empty())
        return std::string("");
    std::string p;
    typedef std::string (*VFfx)(void*, std::string const&, unsigned int);
    if (p.assign(((VFfx*)(*(void***)fileManager))[0x160 / 8](fileManager, path, 0)) == "")
        return std::string("");
    fixPathDelimiters(p, '/');
    std::string fixed = getFixPath(extractFilePath(p, '/'), '/');
    if (!fixed.empty())
        fixed = fixed.substr(0, fixed.length() - 1);
    if (!addPath(fixed))
        return std::string("");
    std::map<std::string, std::vector<File>, NoCaseStringCompare>& m = m_18;
    std::map<std::string, std::vector<File>, NoCaseStringCompare>::iterator it = m.lower_bound(fixed);
    if (it == m.end() || strcasecmp(fixed.c_str(), it->first.c_str()) < 0)
        it = m.insert(it, std::map<std::string, std::vector<File>, NoCaseStringCompare>::value_type(fixed, std::vector<File>()));
    std::vector<File>& files = it->second;
    files.resize(files.size() + 1);
    File& f = files.back();
    f.m_name = extractFileName(p);
    f.m_flags = flags;
    f.m_time = getFileTime(p);
    f.m_listener = listener;
    listener->addRef();
    m_60 = true;
    return p;
}

} }
}

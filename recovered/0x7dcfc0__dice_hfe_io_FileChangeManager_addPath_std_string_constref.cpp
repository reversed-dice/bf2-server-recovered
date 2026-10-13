// FUNCTION: BF2 0x7dcfc0
#include <string>
#include <vector>
#include <map>

namespace dice { namespace hfe {

unsigned char equalsIgnoreCase(std::string const& a, std::string const& b);

namespace io {

class IFileChangeManager {
public:
    virtual ~IFileChangeManager() {}
};

class IDirectoryChangeListener {
public:
    virtual ~IDirectoryChangeListener() {}
};

extern unsigned int IID_IDirectoryChangeNotifier;

class IDirectoryChangeNotifier {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void* queryInterface(void* iid);
    virtual unsigned char addListener(IDirectoryChangeListener* l, std::string const& path, unsigned int a, unsigned int b);
};

class IFileManagerBase {
public:
    virtual void d0();  virtual void d1();  virtual void d2();  virtual void d3();
    virtual void d4();  virtual void d5();  virtual void d6();  virtual void d7();
    virtual void d8();  virtual void d9();  virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20();
    virtual IDirectoryChangeNotifier* getDirectoryChangeNotifier();
};

extern IFileManagerBase* fileManager;

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
        int m_b;
    };

    void* m_10;
    std::map<std::string, std::vector<File>, NoCaseStringCompare> m_18;
    std::vector<std::string> m_48;
    bool m_60;
    std::vector<DirChange> m_68;

    bool addPath(std::string const& path);
    void removeAll();
    virtual ~FileChangeManager();
};

bool FileChangeManager::addPath(std::string const& path)
{
    for (std::vector<std::string>::iterator it = m_48.begin(); it != m_48.end(); ++it) {
        if (equalsIgnoreCase(*it, path))
            return true;
    }
    IDirectoryChangeNotifier* n = (IDirectoryChangeNotifier*)fileManager->getDirectoryChangeNotifier()->queryInterface((void*)IID_IDirectoryChangeNotifier);
    if (n && n->addListener((IDirectoryChangeListener*)this, path, 0, 0x10)) {
        m_48.push_back(path);
        return true;
    }
    return false;
}

}}}

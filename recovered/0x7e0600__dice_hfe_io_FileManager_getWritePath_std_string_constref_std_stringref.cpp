// FUNCTION: BF2 0x7e0600
// BF2_FLAGS: -fcrossjumping
#include <string>
#include <list>

namespace dice { namespace hfe {

void fixPathDelimiters(std::string& path, char sep);
void goUpInPath(std::string& path);
int compareIgnoreCase(std::string const& a, std::string const& b, int n);
bool isPathAbsolute(std::string const& path);

namespace io {

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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual std::string const& getHomePath() const;
    virtual std::string const& getRootPath() const;
};

class FileManager {
public:
    char _pad0[0x40];
    IFileSystem* m_baseSystem;
    char _pad1[0x60];
    std::list<std::string> m_mergeDirs;
    void getWritePath(std::string const& path, std::string& out);
};

void FileManager::getWritePath(std::string const& path, std::string& out)
{
    std::string p(path);
    dice::hfe::fixPathDelimiters(p, '/');
    std::string const& mergeDir = m_mergeDirs.front();
    std::string root("@ROOT@");
    std::string home("@HOME@");
    if ((mergeDir.size() != 0 && dice::hfe::compareIgnoreCase(mergeDir, p, (int)mergeDir.size()) == 0)
        || dice::hfe::isPathAbsolute(p)) {
        out.assign(p);
        return;
    }
    if (p.find(root.c_str(), 0, root.size()) == 0) {
        out.assign(m_baseSystem->getRootPath() + p.substr(root.size(), std::string::npos));
    } else if (p.find(home.c_str(), 0, home.size()) == 0) {
        out.assign(m_baseSystem->getHomePath() + p.substr(home.size(), std::string::npos));
    } else {
        out.assign(mergeDir + p);
    }
    dice::hfe::goUpInPath(out);
}

} }
}

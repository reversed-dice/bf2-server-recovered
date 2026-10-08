// FUNCTION: BF2 0x7e1680
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

class IArchive {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
};

class NoCaseStringCompare {
public:
    bool operator()(const std::string& a, const std::string& b) const;
};

typedef std::map<std::string, std::vector<IArchive*>, NoCaseStringCompare> ArchiveMap;

class FileManager {
public:
    char _pad[0x10];
    ArchiveMap m_map;

    void unmountAllArchives();
};
void FileManager::unmountAllArchives() {
    ArchiveMap::iterator it = m_map.begin();
    ArchiveMap::iterator end = m_map.end();
    while (it != end) {
        std::vector<IArchive*>& v = it->second;
        for (unsigned int i = 0; i < v.size(); ++i) {
            IArchive* a = v[i];
            if (a) a->v21();
        }
        v.erase(v.begin(), v.end());
        ++it;
    }
    m_map.clear();
}

} } }

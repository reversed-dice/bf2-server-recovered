// FUNCTION: BF2 0x419600
// BF2_FLAGS: -fno-strict-aliasing
#include <deque>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace io {

class IFile {
public:
    virtual void v0();
    virtual void v1();
    virtual void close();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(void const* data, unsigned int len);
};

class FileManager {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual IFile* open(const std::string& name, int a, int b, int c);
};

extern FileManager* fileManager;

}

struct MapListEntry {
    std::string m_a;
    std::string m_b;
    unsigned short m_c;
    char _pad[6];
};

class MapList {
public:
    std::string m_name;
    int m_currentMap;
    std::deque<MapListEntry> m_maps;

    bool save() const;
};

bool MapList::save() const
{
    if (m_name.empty())
        return false;
    io::IFile* f = io::fileManager->open(m_name, 0, 2, 0);
    if (!f)
        return false;
    std::stringstream ss;
    for (std::deque<MapListEntry>::const_iterator it = m_maps.begin(); it != m_maps.end(); ++it) {
        ss << "maplist.append \"" << it->m_a << "\" \"" << it->m_b << "\" "
           << (unsigned long)it->m_c << std::endl;
    }
    std::string str = ss.str();
    unsigned int n = f->write(str.data(), str.length());
    f->close();
    return n == str.length();
}

} }

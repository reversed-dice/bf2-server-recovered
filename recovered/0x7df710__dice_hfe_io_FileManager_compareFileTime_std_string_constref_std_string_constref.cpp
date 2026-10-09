// FUNCTION: BF2 0x7df710
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe { namespace io {

struct FileInfo {
    std::string m_name;
    char pad1[0x18];
    unsigned long long m_time;
};

struct FileManager {
    char pad0[0x40];
    bool compareFileTime(std::string const& a, std::string const& b);
};

bool FileManager::compareFileTime(std::string const& a, std::string const& b)
{
    typedef bool (*VFgi)(void*, std::string const&, FileInfo&);
    FileInfo ia, ib;
    if (!((VFgi*)(*(void***)this))[0x70 / 8](this, a, ia))
        return false;
    if (!((VFgi*)(*(void***)this))[0x70 / 8](this, b, ib))
        return false;
    return ia.m_time >= ib.m_time;
}

} } }

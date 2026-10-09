// FUNCTION: BF2 0x7df460
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe { namespace io {

struct FileManager {
    char pad0[0x40];
    void* m_baseSystem;
    bool moveFile(std::string const& a, std::string const& b);
};

bool FileManager::moveFile(std::string const& a, std::string const& b)
{
    typedef void (*VFwp)(void*, std::string const&, std::string&);
    typedef bool (*VFmv)(void*, std::string const&, std::string const&);
    std::string pa, pb;
    ((VFwp*)(*(void***)this))[0x148 / 8](this, a, pa);
    ((VFwp*)(*(void***)this))[0x148 / 8](this, b, pb);
    return ((VFmv*)(*(void***)m_baseSystem))[0x48 / 8](m_baseSystem, pa, pb);
}

} } }

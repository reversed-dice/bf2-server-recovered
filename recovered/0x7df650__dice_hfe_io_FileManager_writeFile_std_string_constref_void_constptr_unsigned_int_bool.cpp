// FUNCTION: BF2 0x7df650
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {
class LoadStat { public: void incLoadCounter(int); };
extern LoadStat* loadStat;
namespace io {

struct FileManager {
    char pad0[0x40];
    void* m_baseSystem;
    bool writeFile(std::string const& name, void const* buf, unsigned int len, bool flag);
};

bool FileManager::writeFile(std::string const& name, void const* buf, unsigned int len, bool flag)
{
    typedef void (*VFwp)(void*, std::string const&, std::string&);
    typedef bool (*VFwf)(void*, std::string const&, void const*, unsigned int, bool);
    std::string path;
    ((VFwp*)(*(void***)this))[0x148 / 8](this, name, path);
    dice::hfe::loadStat->incLoadCounter(1);
    return ((VFwf*)(*(void***)m_baseSystem))[0x60 / 8](m_baseSystem, path, buf, len, flag);
}

} } }

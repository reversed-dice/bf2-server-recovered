// FUNCTION: BF2 0x7df370
#include <string>
namespace dice { namespace hfe { namespace io {

struct FileManager {
    char pad0[0x40];
    bool fileExists(std::string const& name);
};

bool FileManager::fileExists(std::string const& name)
{
    typedef std::string (*VFfx)(void*, std::string const&, bool);
    std::string s = ((VFfx*)(*(void***)this))[0x160 / 8](this, name, false);
    return !s.empty();
}

} } }

// FUNCTION: BF2 0x7df550
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class FileManager {
public:
    bool copyFile(std::string const& src, std::string const& dst, bool flag);
};

bool FileManager::copyFile(std::string const& src, std::string const& dst, bool flag) {
    std::string s1;
    std::string s2;
    typedef void (*VFullPath)(void*, std::string const&, std::string&);
    ((VFullPath*)(*(void***)this))[0x148 / 8](this, src, s1);
    ((VFullPath*)(*(void***)this))[0x148 / 8](this, dst, s2);
    void* fs = *(void**)((char*)this + 0x40);
    typedef bool (*VCopy)(void*, std::string const&, std::string const&, bool);
    return ((VCopy*)(*(void***)fs))[0x50 / 8](fs, s1, s2, flag);
}

} } }

// FUNCTION: BF2 0x7e18c0
#include <string>

namespace dice { namespace hfe {

std::string getLowerCase(std::string const&);

namespace io {

class FileManager {
public:
    char _pad0[0x10];
    std::string stripModPath(std::string const& path) const;
};

std::string FileManager::stripModPath(std::string const& path) const
{
    std::string s(path);
    long pos = getLowerCase(path).find("mods/", 0, 5);
    if (pos != -1) {
        unsigned long p2 = getLowerCase(path).find("shaders", 0, 7);
        if (p2 != 0 && p2 != (unsigned long)-1) {
            s.erase(0, p2);
        }
    }
    return s;
}

} } }

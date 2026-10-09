// FUNCTION: BF2 0x8018b0
#include <string>
#include <stdlib.h>
#include <string.h>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool getFullFileName(std::string& path);
};

bool UnixFileSystem::getFullFileName(std::string& path) {
    char buf[0x1000];
    if (realpath(path.c_str(), buf)) {
        path.assign(buf, strlen(buf));
        return true;
    }
    return false;
}

} } }

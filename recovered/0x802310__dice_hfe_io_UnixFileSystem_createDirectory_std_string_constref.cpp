// FUNCTION: BF2 0x802310
// BF2_FLAGS: -fcrossjumping
#include <string>
#include <errno.h>
#include <sys/stat.h>

namespace dice { namespace hfe { namespace io {

class UnixFileSystem {
public:
    bool createDirectory(std::string const& path);
};

bool UnixFileSystem::createDirectory(std::string const& path) {
    for (std::string::size_type i = 0; i < path.size(); ++i) {
        if (path[i] != '/')
            continue;
        int res = mkdir(std::string(path, 0, i).c_str(), 0755);
        if (res == -1 && errno != EEXIST) {
            (void)(std::string(path, 0, i) + " (towards " + path + ")");
            return false;
        }
    }
    return true;
}

} } }

// FUNCTION: BF2 0x801450
#include <string>
#include <ctype.h>

namespace dice { namespace hfe { namespace io {

void fixUnixPath(std::string& path);

void fixUnixPath(std::string& path) {
    if (path.empty())
        return;
    for (std::string::size_type i = 0; i < path.size(); ++i) {
        if (path[i] == '\\')
            path[i] = '/';
        else
            path[i] = (char)tolower(path[i]);
    }
}

} } }

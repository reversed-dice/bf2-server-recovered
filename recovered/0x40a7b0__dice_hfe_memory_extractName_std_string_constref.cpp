// FUNCTION: BF2 0x40a7b0
#include <string>
#include <algorithm>

namespace dice { namespace hfe { namespace memory {

std::string extractName(const std::string& path)
{
    std::string::size_type pos = path.rfind('\\');
    std::string::size_type slash = path.rfind('/');
    if (pos < slash)
        pos = slash;
    if (pos == std::string::npos)
        return path;
    return path.substr(pos + 1);
}

} } }

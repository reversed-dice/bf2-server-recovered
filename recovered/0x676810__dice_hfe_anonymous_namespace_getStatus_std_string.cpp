// FUNCTION: BF2 0x676810
#include <string>

namespace dice { namespace hfe {

int getStatus(const std::string& status)
{
    int r = status.compare("n");
    int v = 0;
    if (r != 0) {
        r = status.compare("s");
        v = 2 - (unsigned int)(r == 0);
    }
    return v;
}

} }

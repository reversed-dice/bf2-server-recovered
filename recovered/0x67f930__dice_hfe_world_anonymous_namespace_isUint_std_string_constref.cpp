// FUNCTION: BF2 0x67f930
#include <string>

namespace dice { namespace hfe { namespace world {

namespace {

bool isUint(const std::string& s)
{
    const char* p = s.data();
    int n = (int)s.size();
    if (n < 1)
        return true;
    if (p[0] <= '/') return false;
    if (p[0] > '9') return false;
    int i = 0;
    do {
        ++i;
        if (i == n)
            return true;
        if (p[i] <= '/') return false;
    } while (p[i] <= '9');
    return false;
}

}

} } }

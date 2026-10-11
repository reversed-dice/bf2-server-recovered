// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x749e70
#include <string>

namespace {

template <typename T>
T extractFileExt_internal(T const& path)
{
    int p = (int)path.rfind('.');
    if (p == -1) {
        return T();
    }
    if (p > 1 && path[p - 1] == '.') {
        return T();
    }
    return path.substr((typename T::size_type)(p + 1));
}

template std::string extractFileExt_internal<std::string>(std::string const&);

}

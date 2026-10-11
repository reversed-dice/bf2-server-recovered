// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x74a120
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

template std::wstring extractFileExt_internal<std::wstring>(std::wstring const&);

}

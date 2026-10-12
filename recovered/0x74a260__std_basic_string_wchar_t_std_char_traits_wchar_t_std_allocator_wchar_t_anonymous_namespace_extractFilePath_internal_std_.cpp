// FUNCTION: BF2 0x74a260
#include <string>

namespace {

template <typename T, typename C>
T extractFilePath_internal(T const& path, C sep)
{
    int p = (int)path.rfind('\\');
    int q = (int)path.rfind('/');
    if (p < q) {
        p = q;
    }
    if (p == -1) {
        return T();
    }
    return T(path, 0, (typename T::size_type)p) + sep;
}

template std::wstring extractFilePath_internal<std::wstring, wchar_t>(std::wstring const&, wchar_t);

}

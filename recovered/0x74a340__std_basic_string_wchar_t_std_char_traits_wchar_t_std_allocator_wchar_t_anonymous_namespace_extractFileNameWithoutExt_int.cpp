// FUNCTION: BF2 0x74a340
#include <string>

namespace dice {
namespace hfe {
std::string extractFileName(std::string const& path);
std::wstring extractFileName(std::wstring const& path);
}
}

namespace {

template <typename T>
T extractFileNameWithoutExt_internal(T const& path)
{
    T s = dice::hfe::extractFileName(path);
    int p = (int)s.rfind('.');
    if (p == -1) {
        return s;
    }
    return T(s, 0, (typename T::size_type)p);
}

template std::string extractFileNameWithoutExt_internal<std::string>(std::string const&);
template std::wstring extractFileNameWithoutExt_internal<std::wstring>(std::wstring const&);

}

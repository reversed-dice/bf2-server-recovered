// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x749990
#include <string>

namespace dice { namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPathDelimiters(std::wstring& path, wchar_t sep);
}}

namespace {

template <typename T, typename C>
void fixPathDelimiters_internal(T& path, C sep)
{
    typename T::size_type n = path.size();
    for (typename T::size_type i = 0; i < n; ++i) {
        if (path[i] == '/' || path[i] == '\\') {
            path[i] = sep;
        }
    }
}

template void fixPathDelimiters_internal<std::wstring, wchar_t>(std::wstring&, wchar_t);

}

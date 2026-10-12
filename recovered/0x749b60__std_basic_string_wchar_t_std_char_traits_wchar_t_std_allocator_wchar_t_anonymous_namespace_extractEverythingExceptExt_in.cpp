// FUNCTION: BF2 0x749b60
#include <string>

namespace dice { namespace hfe {
std::wstring getFixPathDelimiters(std::wstring const& path, wchar_t sep);
} }

namespace {

template <typename T>
T extractEverythingExceptExt_internal(T const& path)
{
    T s = dice::hfe::getFixPathDelimiters(path, '/');
    int p = (int)s.rfind('.');
    if (p == -1) {
        return s;
    }
    return T(s, 0, (typename T::size_type)p);
}

template std::wstring extractEverythingExceptExt_internal<std::wstring>(std::wstring const&);

}

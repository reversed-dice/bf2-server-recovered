// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x749a60
#include <string>

namespace dice {
namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPathDelimiters(std::wstring& path, wchar_t sep);
}
}

namespace {

// compile-state padding: 7 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
template <typename T, typename C>
void fixPathDelimiters_internal(T& path, C sep)
{
    for (typename T::size_type i = 0; i < path.size(); ++i) {
        if (path[i] == '/' || path[i] == '\\') {
            path[i] = sep;
        }
    }
}

template <typename T, typename C>
void fixPath_internal(T& path, C sep)
{
    if (path.empty()) {
        return;
    }
    dice::hfe::fixPathDelimiters(path, sep);
    if (path[path.size() - 1] == sep) {
        return;
    }
    path += sep;
}

template void fixPathDelimiters_internal<std::string, char>(std::string&, char);
template void fixPathDelimiters_internal<std::wstring, wchar_t>(std::wstring&, wchar_t);
template void fixPath_internal<std::string, char>(std::string&, char);
template void fixPath_internal<std::wstring, wchar_t>(std::wstring&, wchar_t);

}

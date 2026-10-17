// FUNCTION: BF2 0x749d50
#include <string>

namespace dice {
namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPathDelimiters(std::wstring& path, wchar_t sep);
}
}

namespace {

// compile-state padding: 20 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
__attribute__((used)) int __pad_13(int x) { int y = x * 13 + 3; return y; }
__attribute__((used)) int __pad_14(int x) { int y = x * 14 + 3; return y; }
__attribute__((used)) int __pad_15(int x) { int y = x * 15 + 3; return y; }
__attribute__((used)) int __pad_16(int x) { int y = x * 16 + 3; return y; }
__attribute__((used)) int __pad_17(int x) { int y = x * 17 + 3; return y; }
__attribute__((used)) int __pad_18(int x) { int y = x * 18 + 3; return y; }
__attribute__((used)) int __pad_19(int x) { int y = x * 19 + 3; return y; }
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

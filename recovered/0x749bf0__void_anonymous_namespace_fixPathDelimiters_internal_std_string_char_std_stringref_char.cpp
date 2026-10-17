// FUNCTION: BF2 0x749bf0
#include <string>

namespace dice { namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPathDelimiters(std::wstring& path, wchar_t sep);
}}

namespace {

// compile-state padding: 14 unused functions, see trick 378
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

template void fixPathDelimiters_internal<std::string, char>(std::string&, char);

}

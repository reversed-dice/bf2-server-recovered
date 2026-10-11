// FUNCTION: BF2 0x749f00
#include <string>

namespace {

template <typename T>
T extractFileName_internal(T const& path)
{
    int p1 = (int)path.rfind('\\');
    int p2 = (int)path.rfind('/');
    if (p1 < p2) {
        p1 = p2;
    }
    if (p1 == -1) {
        return T(path);
    }
    return path.substr((typename T::size_type)(p1 + 1));
}

template std::string extractFileName_internal<std::string>(std::string const&);

}

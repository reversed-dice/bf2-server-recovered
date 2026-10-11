// FUNCTION: BF2 0x749cc0
#include <string>

namespace dice {
namespace hfe {
std::string getFixPathDelimiters(std::string const& path, char sep);
}
}

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

template std::string extractEverythingExceptExt_internal<std::string>(std::string const&);

}

// FUNCTION: BF2 0x749e30
#include <string>

namespace dice {
namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPath(std::string& path, char sep);
}
}

namespace {

template <typename T, typename C>
T getFixPath_internal(T const& path, C sep)
{
    T s(path);
    dice::hfe::fixPath(s, sep);
    return s;
}

template std::string getFixPath_internal<std::string, char>(std::string const&, char);

}

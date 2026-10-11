// FUNCTION: BF2 0x749c80
#include <string>

namespace dice {
namespace hfe {
void fixPathDelimiters(std::string& path, char sep);
void fixPath(std::string& path, char sep);
}
}

namespace {

template <typename T, typename C>
T getFixPathDelimiters_internal(T const& path, C sep)
{
    T s(path);
    dice::hfe::fixPathDelimiters(s, sep);
    return s;
}

template std::string getFixPathDelimiters_internal<std::string, char>(std::string const&, char);

}

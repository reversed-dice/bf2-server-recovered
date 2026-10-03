// FUNCTION: BF2 0x7c29b0
#include <string>
#include <utility>

namespace dice { namespace hfe { namespace console {

class Wrapper {
public:
    virtual std::pair<std::string, std::string> getRangeAsString() const;
};

std::pair<std::string, std::string> Wrapper::getRangeAsString() const {
    return std::pair<std::string, std::string>(std::string(""), std::string(""));
}

} } }

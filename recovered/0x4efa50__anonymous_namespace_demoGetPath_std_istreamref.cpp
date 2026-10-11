// FUNCTION: BF2 0x4efa50
#include <istream>
#include <string>

namespace dice { namespace hfe {
std::string getFixPathDelimiters(std::string const&, char);
} }

namespace {

std::string demoGetString(std::istream& is);

std::string demoGetPath(std::istream& is)
{
    std::string s = demoGetString(is);
    return dice::hfe::getFixPathDelimiters(s, '/');
}

}

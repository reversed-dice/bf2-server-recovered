// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x8ba800
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
void addConstantToAllConsoles(std::string const& name, std::string const& value);
} } }

namespace dice { namespace hfe { namespace world {

void addConstantHelper(std::string const& name, unsigned int value) {
    std::stringstream ss;
    ss << value;
    dice::hfe::io::addConstantToAllConsoles(name, ss.str());
}

} } }

// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x852140
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

void addConstantToAllConsoles(std::string const& name, std::string const& value);

void addConstantHelper(std::string const& name, unsigned int value) {
    std::stringstream ss;
    ss << value;
    addConstantToAllConsoles(name, ss.str());
}

} } }

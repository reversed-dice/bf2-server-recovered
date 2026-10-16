// FUNCTION: BF2 0x7a3380
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <sstream>

namespace dice { namespace hfe { namespace io {

class File {
public:
    unsigned int write(const void* data, unsigned int size);
    unsigned int write(std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& os);
};

unsigned int File::write(std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >& os) {
    std::string str = os.str();
    return write(str.data(), str.length());
}

} } }

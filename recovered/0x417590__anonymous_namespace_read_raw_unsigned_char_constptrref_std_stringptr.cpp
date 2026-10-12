// FUNCTION: BF2 0x417590
#include <string>

namespace
{

void read_raw(unsigned char const*& p, unsigned short* v);

}

void read_raw(unsigned char const*& p, std::string& s){
    unsigned short n;

    read_raw(p, &n);

    s = std::string((char const*)p, n);
    p += n;
}

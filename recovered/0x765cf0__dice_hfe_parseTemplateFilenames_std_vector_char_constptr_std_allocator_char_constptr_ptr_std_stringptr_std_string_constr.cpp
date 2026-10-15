// FUNCTION: BF2 0x765cf0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

void parseTemplateFilenames(std::vector<char const*>* out, std::string* str, std::string const& src)
{
    out->clear();
    *str = src;
    unsigned long pos = 0;
    while (true) {
        unsigned long f = str->find(',', pos);
        out->push_back(&(*str)[pos]);
        if (f == std::string::npos)
            break;
        (*str)[f] = '\0';
        pos = f + 1;
        if (pos == str->size())
            break;
    }
}

// FUNCTION: BF2 0x7482f0
#include <string>
namespace dice { namespace hfe {

class SystemInfo {
public:
    virtual void v0() {}
    virtual void v8() {}
    virtual std::string const& getName() const;
    virtual std::string getSuffix() const;
};

SystemInfo* systemInfo();
std::string formatString(char const*, ...);
void convertToValidFilename(std::string& s);

std::string makeFilename(char const* name)
{
    std::string s(name);
    s += formatString("%d", 0xc51) + "_";
    s += systemInfo()->getName() + "_";
    s += systemInfo()->getSuffix();
    s += ".bin";
    convertToValidFilename(s);
    return s;
}

} }

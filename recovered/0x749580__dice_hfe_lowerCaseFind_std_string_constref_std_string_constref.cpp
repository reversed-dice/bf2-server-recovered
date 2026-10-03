// FUNCTION: BF2 0x749580
// lowerCaseFind 0x749580
#include <string>

namespace dice { namespace hfe {

extern void setLowerCase_749580(std::string&);

unsigned long lowerCaseFind(const std::string& a, const std::string& b) {
    std::string sa(a);
    std::string sb(b);
    setLowerCase_749580(sa);
    setLowerCase_749580(sb);
    return sa.find(sb.c_str(), 0, sb.size());
}

} }

// FUNCTION: BF2 0x5f9e40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe {
int compareIgnoreCase(char const*, char const*);
namespace world {

class MultiFireCompTemplate {
public:
    unsigned char m_pad[0x98];
    std::list<std::string> m_barrels;   // 0x98, sentinelle inline
    bool isBarrel(std::string const& name) const;
    void addBarrelName(std::string const& name);
    void removeBarrelName(std::string const& name);
};
void MultiFireCompTemplate::addBarrelName(std::string const& name)
{
    for (std::list<std::string>::const_iterator it = m_barrels.begin(); it != m_barrels.end(); ++it) {
        if (compareIgnoreCase(name.c_str(), it->c_str()) == 0) {
            return;
        }
    }
    m_barrels.push_back(name);
}

} } }

// FUNCTION: BF2 0x7dfaa0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe {

std::string getFixPath(std::string const&, char);
bool equalsIgnoreCase(std::string const&, std::string const&);

namespace io {

class FileManager {
public:
    char pad0[0x68];
    std::map<std::string, std::string> m_paths;
    virtual bool removePathOverload(std::string const& a, std::string const& b);
};

bool FileManager::removePathOverload(std::string const& a, std::string const& b)
{
    std::string fixed = getFixPath(a, '/');
    if (fixed.compare("/") == 0)
        fixed.assign("", 0);
    std::string fixed2 = getFixPath(b, '/');
    for (std::map<std::string, std::string>::iterator it = m_paths.begin(); it != m_paths.end(); ++it) {
        if (equalsIgnoreCase(it->first, fixed) && equalsIgnoreCase(it->second, fixed2)) {
            m_paths.erase(it);
            return true;
        }
    }
    return false;
}

} } }

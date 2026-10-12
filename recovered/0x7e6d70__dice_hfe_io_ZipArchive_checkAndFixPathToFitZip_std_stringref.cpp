// FUNCTION: BF2 0x7e6d70
#include <string>

namespace dice { namespace hfe {
void setLowerCase(std::string& s);
void fixPathDelimiters(std::string& s, char c);
namespace io {

class ZipArchive {
public:
    char _pad[0x20];
    std::string m_ext;
    bool checkAndFixPathToFitZip(std::string& path);
};

} } }

bool dice::hfe::io::ZipArchive::checkAndFixPathToFitZip(std::string& path)
{
    dice::hfe::setLowerCase(path);
    dice::hfe::fixPathDelimiters(path, '/');
    if (path.find(m_ext.c_str(), 0, m_ext.size()) == std::string::npos)
        return false;
    path.assign(path.substr((int)m_ext.size(), std::string::npos));
    return true;
}

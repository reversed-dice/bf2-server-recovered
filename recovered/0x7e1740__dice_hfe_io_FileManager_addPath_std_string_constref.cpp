// FUNCTION: BF2 0x7e1740
#include <string>
#include <list>
namespace dice { namespace hfe {
std::string getFixPath(std::string const&, char);
namespace io {
class FileManager {
public:
    char _pad0[0xa8];
    std::list<std::string> m_paths;   // +0xa8
    void addPath(std::string const&);
};
void FileManager::addPath(std::string const& name) {
    std::string fixed = getFixPath(name, '/');
    m_paths.push_front(fixed);
}
}}}

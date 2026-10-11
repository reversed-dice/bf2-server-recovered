// FUNCTION: BF2 0x7e17e0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe {

std::string getFixPath(std::string const&, char);

namespace io {

class IArchive;

class FileManager {
public:
    char _pad0[0x10];
    std::map<std::string, std::vector<IArchive*> > m_archives;
    char _pad1[0x68];
    std::list<std::string> m_paths;
    void removePath(std::string const& path);
};

void FileManager::removePath(std::string const& path)
{
    std::string fixed = getFixPath(path, '/');
    std::list<std::string>::iterator it = m_paths.begin();
    while (it != m_paths.end()) {
        if (*it == fixed) {
            m_paths.erase(it);
            break;
        }
        ++it;
    }
}

} } }

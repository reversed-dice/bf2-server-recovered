// FUNCTION: BF2 0x7def90
#include <list>
#include <string>
namespace dice { namespace hfe {
bool equalsIgnoreCase(std::string const&, std::string const&);
namespace io {

class FileManager {
public:
    struct MergeDirectory { std::string m_path; };
    char pad0[0x58];
    std::list<MergeDirectory> m_mergeDirs;
    virtual bool removeMergeDirectory(std::string const& dir);
};

bool FileManager::removeMergeDirectory(std::string const& dir)
{
    for (std::list<MergeDirectory>::iterator it = m_mergeDirs.begin(); it != m_mergeDirs.end(); ++it) {
        if (dice::hfe::equalsIgnoreCase(it->m_path, dir)) {
            m_mergeDirs.erase(it);
            return true;
        }
    }
    return false;
}

} } }

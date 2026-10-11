// FUNCTION: BF2 0x7df000
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

class IArchive;

class FileManager {
public:
    char _pad0[0x10];
    std::map<std::string, std::vector<IArchive*> > m_archives;
    void getAllArchives(std::vector<IArchive*>* out);
};

void FileManager::getAllArchives(std::vector<IArchive*>* out)
{
    std::map<std::string, std::vector<IArchive*> >::iterator it = m_archives.begin();
    while (it != m_archives.end()) {
        std::vector<IArchive*>& v = it->second;
        for (unsigned int i = 0; i < v.size(); ++i)
            out->push_back(v[i]);
        ++it;
    }
}

} } }

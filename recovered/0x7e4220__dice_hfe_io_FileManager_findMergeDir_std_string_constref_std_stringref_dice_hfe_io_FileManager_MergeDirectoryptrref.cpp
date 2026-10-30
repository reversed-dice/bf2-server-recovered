// FUNCTION: BF2 0x7e4220
// BF2_FLAGS: -fcrossjumping
#include <list>
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

bool equalsIgnoreCase(std::string const&, std::string const&, int);
void fixPathDelimiters(std::string&, char);

struct Debug_7e4220 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7e4220(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7e4220();
};

namespace io {

class FileManager {
public:
    struct MergeDirectory { std::string m_path; };
    char pad0[0x60];
    std::list<MergeDirectory> m_mergeDirs;
    bool findMergeDir(std::string const& path, std::string& out, MergeDirectory*& found);
};

bool FileManager::findMergeDir(std::string const& path, std::string& out, MergeDirectory*& found)
{
    Debug_7e4220(6, std::string("IO/File/FileManager.cpp"), 0x464, std::string(&DAT_00bb25f1)).os
        << "DO NOT USE findMergeDir, use findArchive() instead!";

    std::string p(path);
    dice::hfe::fixPathDelimiters(p, '/');
    for (std::list<MergeDirectory>::iterator it = m_mergeDirs.begin(); it != m_mergeDirs.end(); ++it) {
        MergeDirectory* d = &*it;
        if (d->m_path.size() == 0) {
            out = p;
            found = d;
            return true;
        }
        if (dice::hfe::equalsIgnoreCase(d->m_path, p, d->m_path.size())) {
            out = p.substr(d->m_path.size());
            found = d;
            return true;
        }
    }
    return false;
}

} } }

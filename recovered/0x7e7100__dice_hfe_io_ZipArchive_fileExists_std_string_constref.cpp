// FUNCTION: BF2 0x7e7100
#include <string>

namespace dice { namespace hfe { namespace io {

class ZipArchive {
public:
    bool fileExists(const std::string& name);
    bool checkAndFixPathToFitZip(std::string& path);
    void* findEntry(const std::string& path);
};

bool ZipArchive::fileExists(const std::string& name) {
    std::string path(name);
    bool r = false;
    if (checkAndFixPathToFitZip(path))
        r = (findEntry(path) != 0);
    return r;
}

} } }

#include <string>

namespace dice { namespace hfe { namespace io {

class ZipArchive {
public:
    bool checkAndFixPathToFitZip(std::string& path);
    void* findEntry(std::string const& path);
    void* openFileHandle();
    void closeFileHandle(void* h);
    bool writeFile(std::string const& path, void const* data, unsigned int len, bool flag);
};

// FUNCTION: BF2 0x7e6f10
bool ZipArchive::writeFile(std::string const& path, void const* data, unsigned int len, bool flag) {
    std::string fixed(path);
    bool ret = false;
    if (checkAndFixPathToFitZip(fixed)) {
        char* entry = (char*)findEntry(fixed);
        if (entry != 0 && *(unsigned long*)(entry + 0x38) <= len) {
            void* h = openFileHandle();
            ret = true;
            closeFileHandle(h);
        }
    }
    return ret;
}

} } }

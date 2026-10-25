// FUNCTION: BF2 0x7df160
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_7df160 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7df160(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7df160();
};

std::string getLowerCase(const std::string& s);

namespace io {

void removeBf2ContentPart(std::string& path)
{
    std::string::size_type pos = getLowerCase(path).find("bf2/content/", 0, 12);
    if (pos != std::string::npos) {
        Debug_7df160(6, std::string("IO/File/FileManager.cpp"), 0x46,
                     std::string(&DAT_00bb25f1)).os
            << "should not use paths including bf2/content anymore, please fix file:" << path;
        path.erase(pos, 12);
    }
}

} } }

// FUNCTION: BF2 0x4e5160
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_4e5160 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_4e5160(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_4e5160();
};

void memoryDebugCallback(bool b, char const* text)
{
    if (!b) {
        Debug_4e5160(7, std::string("Game/Main/BF2Log.cpp"), 0x2b0,
                     std::string(&DAT_00bb25f1)).os << text;
    }
}

} }

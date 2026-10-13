// FUNCTION: BF2 0x4f01f0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

class DemoConfig {
public:
    bool fail(const std::string& msg) const;
};

bool DemoConfig::fail(const std::string& msg) const
{
    Debug(6, std::string("Game/DemoRecorder/DemoConfig.cpp"), 0xe7,
          std::string(&DAT_00bb25f1)).os
        << "DemoConfig sanity check failure: " << msg;
    return false;
}

} }

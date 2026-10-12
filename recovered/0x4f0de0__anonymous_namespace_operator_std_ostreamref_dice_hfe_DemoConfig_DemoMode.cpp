// FUNCTION: BF2 0x4f0de0
// BF2_FLAGS: -fno-strict-aliasing
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

class DemoConfig
{
public:
    enum DemoMode
    {
        DEMO_MODE_PLAYBACK = 0,
        DEMO_MODE_RECORD = 1,
        DEMO_MODE_RENDER = 2,
        DEMO_MODE_RENDERSOUND = 3
    };
};

namespace {

std::ostream& operator<<(std::ostream& os, DemoConfig::DemoMode v)
{
    switch (v) {
    case DemoConfig::DEMO_MODE_PLAYBACK:
        os << "playback";
        break;
    case DemoConfig::DEMO_MODE_RECORD:
        os << "record";
        break;
    case DemoConfig::DEMO_MODE_RENDER:
        os << "render";
        break;
    case DemoConfig::DEMO_MODE_RENDERSOUND:
        os << "rendersound";
        break;
    default:
        dice::hfe::Debug(6, std::string("Game/DemoRecorder/DemoConfig.cpp"), 83,
                         std::string(&DAT_00bb25f1)).os
            << "Invalid demoMode " << (int)v;
        break;
    }
    return os;
}

}

} }

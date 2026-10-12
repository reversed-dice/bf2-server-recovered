// FUNCTION: BF2 0x4f0fc0
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
    enum CameraMode
    {
        CAMERA_MODE_USER = 0,
        CAMERA_MODE_RECORD = 1,
        CAMERA_MODE_PLAYBACK = 2
    };
};

namespace {

std::ostream& operator<<(std::ostream& os, DemoConfig::CameraMode v)
{
    switch (v) {
    case DemoConfig::CAMERA_MODE_USER:
        os << "user";
        break;
    case DemoConfig::CAMERA_MODE_RECORD:
        os << "record";
        break;
    case DemoConfig::CAMERA_MODE_PLAYBACK:
        os << "playback";
        break;
    default:
        dice::hfe::Debug(6, std::string("Game/DemoRecorder/DemoConfig.cpp"), 120,
                         std::string(&DAT_00bb25f1)).os
            << "Invalid cameraMode " << (int)v;
        break;
    }
    return os;
}

}

} }

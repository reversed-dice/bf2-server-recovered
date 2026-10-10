// FUNCTION: BF2 0x74a640
namespace {
unsigned long long getCurrentTime();
unsigned long long g_startTime;
unsigned long long g_frequency;
}

namespace dice { namespace hfe {

class System {
public:
    static double getWallClockTime();
};

double System::getWallClockTime() {
    return (double)(getCurrentTime() - g_startTime) / (double)g_frequency;
}

} }

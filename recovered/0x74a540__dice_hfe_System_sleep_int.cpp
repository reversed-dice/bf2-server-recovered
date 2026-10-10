// FUNCTION: BF2 0x74a540
#include <time.h>
namespace dice { namespace hfe {
class System {
public:
    void sleep(int ms);
};
void System::sleep(int ms)
{
    timespec ts;
    ts.tv_sec = ms / 1000;
    ts.tv_nsec = (ms % 1000) * 1000000;
    nanosleep(&ts, 0);
}
}}

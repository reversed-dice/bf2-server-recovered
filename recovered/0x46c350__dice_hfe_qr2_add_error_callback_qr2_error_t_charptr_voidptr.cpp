// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x46c350
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_46c350 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_46c350(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_46c350();
};

} }

extern "C" void qr2_add_error_callback(int error, char* msg, void* instance)
{
    if (error == 4) {
        dice::hfe::Debug_46c350(8, std::string("Game/MatchMaking/Server/GameSpyBackend.cpp"), 0xc4,
                         std::string(&DAT_00bb25f1)).os
            << "GameSpy query failed: Please check your firewall configuration.";
        return;
    }
    const char* m = "(unknown)";
    if (msg)
        m = msg;
    dice::hfe::Debug_46c350(8, std::string("Game/MatchMaking/Server/GameSpyBackend.cpp"), 0xc9,
                     std::string(&DAT_00bb25f1)).os
        << "dep: gamespy QR2 failed: add_error_cb: " << error << ": " << m;
}

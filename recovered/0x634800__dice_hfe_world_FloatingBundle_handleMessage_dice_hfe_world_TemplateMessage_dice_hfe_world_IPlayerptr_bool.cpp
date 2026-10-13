// FUNCTION: BF2 0x634800
#include <string>
#include <ostream>

// dice::hfe::world::FloatingBundle::handleMessage(TemplateMessage, IPlayer*, bool)
// Debug guard: build a Debug temporary, stream one message, return. The Debug
// object carries its ostream at +0x20 and is 0x180 bytes; both strings are
// temporaries (tag built first), destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_634800 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_634800(int type, std::string const& file, int line, std::string const& tag);
    ~Debug_634800();
};

namespace world {

class FloatingBundle {
public:
    void handleMessage(int msg, void* player, bool used);
};

} }

}

void dice::hfe::world::FloatingBundle::handleMessage(int msg, void* player, bool used)
{
    if (*(void**)((char*)this + 0x88) == 0)
    {
        dice::hfe::Debug_634800(6, std::string("Game/Objects/Vehicle/Floatingbundle.cpp"), 129,
                                std::string(&DAT_00bb25f1)).os
            << "No pshyicsNodeComp!";
    }
}

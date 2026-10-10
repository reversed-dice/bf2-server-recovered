// FUNCTION: BF2 0x4f2040
#include <list>

namespace dice { namespace hfe { namespace io {

struct PlayerInput {
    char _pad[0x111];
};

} } }

namespace dice { namespace hfe {

class DemoRecorder {
public:
    char _pad0xb0[0xb0];
    std::list<io::PlayerInput> m_inputs;
    bool isOpenForPlayback() const;
    void addPlayerInput(io::PlayerInput const& input);
};

void DemoRecorder::addPlayerInput(io::PlayerInput const& input)
{
    if (isOpenForPlayback())
        m_inputs.push_back(input);
}

} }

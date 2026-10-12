// FUNCTION: BF2 0x4f1fb0
#include <list>

namespace dice { namespace hfe {

namespace io {
struct PlayerInput {
    char m_pad[0x20];
};
} // namespace io

class DemoRecorder {
public:
    char _pad[0xb0];
    std::list<io::PlayerInput> m_inputs;  // +0xb0
    void handlePlayerInput(float dt);
    void internalHandlePlayerInput(io::PlayerInput const& input, float dt);
};

void DemoRecorder::handlePlayerInput(float dt) {
    while (m_inputs.size() > 0) {
        internalHandlePlayerInput(m_inputs.front(), dt);
        m_inputs.pop_front();
    }
}

} }

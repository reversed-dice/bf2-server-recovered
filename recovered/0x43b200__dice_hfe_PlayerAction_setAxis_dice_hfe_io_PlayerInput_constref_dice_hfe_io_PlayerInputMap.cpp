// from api 92.31%
// FUNCTION: BF2 0x43b200
namespace dice { namespace hfe {
namespace io {

typedef int PlayerInputMap;

struct PlayerInput {
    float axes[64];        // +0x0
    unsigned long mask;    // +0x100
};

}

float convertAxisToInternalResolution(float val);

class PlayerAction {
public:
    int m_sequence;        // +0x0
    short m_axes[12];      // +0x4

    void setAxis(io::PlayerInput const& input, io::PlayerInputMap map);
};

void PlayerAction::setAxis(io::PlayerInput const& input, io::PlayerInputMap map)
{
    float val;
    if (__builtin_expect(map <= 63 && ((input.mask >> map) & 1), 1)) {
        val = input.axes[(unsigned int)map];
    } else {
        *(unsigned int*)&val = 0;
    }
    m_axes[map] = (short)(int)(convertAxisToInternalResolution(val) * 100.0f);
}

} }

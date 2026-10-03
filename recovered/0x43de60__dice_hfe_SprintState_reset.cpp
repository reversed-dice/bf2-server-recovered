// FUNCTION: BF2 0x43de60
namespace dice { namespace hfe {
class SprintState {
public:
    char _pad[0x14];
    bool sprinting;
    bool jumping;
    bool falling;
    void reset();
};
void SprintState::reset() {
    sprinting = false;
    jumping = false;
    falling = false;
}
}
}

// REVERSED_FUNCTION: dice_hfe_SprintState_reset (0x43de60)

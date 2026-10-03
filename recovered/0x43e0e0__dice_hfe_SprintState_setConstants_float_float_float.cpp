// FUNCTION: BF2 0x43e0e0
namespace dice { namespace hfe {
class SprintState {
public:
    float speed;
    float accel;
    float jump;
    void setConstants(float s, float a, float j);
};
void SprintState::setConstants(float s, float a, float j) {
    speed = s;
    accel = a;
    jump = j;
}
}
}

// REVERSED_FUNCTION: dice_hfe_SprintState_setConstants_float_float_float (0x43e0e0)

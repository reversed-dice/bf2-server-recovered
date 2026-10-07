// FUNCTION: BF2 0x43de70
namespace dice { namespace hfe {
struct SprintState {
    float a;
    float b;
    float c;
    float d;
    float e;
    void reset();
    SprintState();
};

SprintState::SprintState()
{
    float z = 0.0f;
    float one = 1.0f;
    a = z;
    b = z;
    d = one;
    c = z;
    e = one;
    reset();
}
}}

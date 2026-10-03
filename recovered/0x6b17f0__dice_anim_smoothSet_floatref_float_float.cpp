// FUNCTION: BF2 0x6b17f0
namespace dice { namespace anim {
void eom_6b17f0(char* self, float target, float delta) {
    float cur = *(float*)self;
    if (target > cur) {
        cur += delta;
        *(float*)self = cur;
        if (cur > target) *(float*)self = target;
    } else {
        if (cur > target) {
            cur -= delta;
            if (cur < target) cur = target;
            *(float*)self = cur;
        }
    }
}
} }
// REVERSED_FUNCTION: test (0x6b17f0)

// FUNCTION: BF2 0x4a2420
// Player::setInterpolationTime 0x4a2bf0 — clamp 512
namespace dice { namespace hfe {

void setInterpolationTime(void* self, unsigned int t) {
    unsigned int v = t;
    if (v >= 0x3ff)
        v = 0x3ff;
    *(unsigned int*)((char*)self + 0x118) = v;
}

}}

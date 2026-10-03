// FUNCTION: BF2 0x4a2bf0
// Player::setInterpolationTime 0x4a2bf0 — clamp 512
namespace dice { namespace hfe {

void setInterpolationTime(void* self, unsigned int t) {
    unsigned int v = t;
    if (v >= 0x200)
        v = 0x200;
    *(unsigned int*)((char*)self + 0x11c) = v;
}

}}

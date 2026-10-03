// FUNCTION: BF2 0x4a2420
// Player::setPing 0x4a2420 — clamp 1023
namespace dice { namespace hfe {

void setPing(void* self, unsigned int ping) {
    unsigned int p = ping;
    if (p >= 0x3ff)
        p = 0x3ff;
    *(unsigned int*)((char*)self + 0x118) = p;
}

}}

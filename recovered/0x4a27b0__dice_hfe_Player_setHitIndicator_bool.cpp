// FUNCTION: BF2 0x4a27b0
// Player::setHitIndicator 0x4a27b0 — flag + float
namespace dice { namespace hfe {

void setHitIndicator(void* self, bool b) {
    if (b) {
        *(int*)((char*)self + 0x2f0) = 0x3f800000;
        *(unsigned char*)((char*)self + 0x2f4) = (unsigned char)b;
    }
}

}}

// FUNCTION: BF2 0x4a29e0
// Player::getPlayerGasMaskChangeTimer 0x4a29e0 — float
namespace dice { namespace hfe {

float getPlayerGasMaskChangeTimer(void* self) {
    return *(float*)((char*)self + 0x440);
}

}}

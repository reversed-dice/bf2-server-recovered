// FUNCTION: BF2 0x4a29f0
// Player::getPlayerNightVisionChangeTimer 0x4a29f0 — float
namespace dice { namespace hfe {

float getPlayerNightVisionChangeTimer(void* self) {
    return *(float*)((char*)self + 0x444);
}

}}

// FUNCTION: BF2 0x4a2a40
// Player::getRadioSpamFilterFlagTimer 0x4a2a40 — float
namespace dice { namespace hfe {

float getRadioSpamFilterFlagTimer(void* self) {
    return *(float*)((char*)self + 0x1bc);
}

}}

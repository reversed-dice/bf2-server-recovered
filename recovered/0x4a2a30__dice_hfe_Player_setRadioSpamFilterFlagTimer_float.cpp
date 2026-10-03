// FUNCTION: BF2 0x4a2a30
// Player::setRadioSpamFilterFlagTimer 0x4a2a30 — float
namespace dice { namespace hfe {

void setRadioSpamFilterFlagTimer(void* self, float t) {
    *(float*)((char*)self + 0x1bc) = t;
}

}}

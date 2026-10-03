// FUNCTION: BF2 0x4a2a10
// Player::setRadioSpamBlockedFlagCount 0x4a2a10 — dword
namespace dice { namespace hfe {

void setRadioSpamBlockedFlagCount(void* self, int n) {
    *(int*)((char*)self + 0x1b8) = n;
}

}}

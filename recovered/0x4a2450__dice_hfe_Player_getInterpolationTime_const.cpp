// FUNCTION: BF2 0x4a2450
// Player::getInterpolationTime 0x4a2450 — dword
namespace dice { namespace hfe {

int getInterpolationTime(void* self) {
    return *(int*)((char*)self + 0x11c);
}

}}

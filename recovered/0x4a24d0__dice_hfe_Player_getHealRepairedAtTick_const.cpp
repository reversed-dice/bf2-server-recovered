// FUNCTION: BF2 0x4a24d0
// Player::getHealRepairedAtTick 0x4a24d0 — dword
namespace dice { namespace hfe {

unsigned int getHealRepairedAtTick(void* self) {
    return *(unsigned int*)((char*)self + 0x16c);
}

}}

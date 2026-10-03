// FUNCTION: BF2 0x4a23f0
// Player::getIsAlive 0x4a23f0 — byte
namespace dice { namespace hfe {

unsigned char getIsAlive(void* self) {
    return *(unsigned char*)((char*)self + 0xf5);
}

}}

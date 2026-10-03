// FUNCTION: BF2 0x4a24a0
// Player::getFlagHolder 0x4a24a0 — byte
namespace dice { namespace hfe {

unsigned char getFlagHolder(void* self) {
    return *(unsigned char*)((char*)self + 0x168);
}

}}

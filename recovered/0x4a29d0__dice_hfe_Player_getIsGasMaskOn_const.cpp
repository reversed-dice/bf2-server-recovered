// FUNCTION: BF2 0x4a29d0
// Player::getIsGasMaskOn 0x4a29d0 — byte
namespace dice { namespace hfe {

unsigned char getIsGasMaskOn(void* self) {
    return *(unsigned char*)((char*)self + 0x43c);
}

}}

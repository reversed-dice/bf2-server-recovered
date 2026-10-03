// FUNCTION: BF2 0x4a23c0
// Player::getIsAIPlayer 0x4a23c0 — byte
namespace dice { namespace hfe {

unsigned char getIsAIPlayer(void* self) {
    return *(unsigned char*)((char*)self + 0xf4);
}

}}

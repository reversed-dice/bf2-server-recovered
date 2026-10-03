// FUNCTION: BF2 0x4a2410
// Player::getSuicide 0x4a2410 — byte
namespace dice { namespace hfe {

unsigned char getSuicide(void* self) {
    return *(unsigned char*)((char*)self + 0xf6);
}

}}

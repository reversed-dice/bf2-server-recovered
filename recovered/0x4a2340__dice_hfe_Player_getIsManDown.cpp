// FUNCTION: BF2 0x4a2340
// Player::getIsManDown 0x4a2340 — byte
namespace dice { namespace hfe {

unsigned char getIsManDown(void* self) {
    return *(unsigned char*)((char*)self + 0x108);
}

}}

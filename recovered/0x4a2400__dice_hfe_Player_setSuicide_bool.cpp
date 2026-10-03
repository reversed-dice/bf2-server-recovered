// FUNCTION: BF2 0x4a2400
// Player::setSuicide 0x4a2400 — store byte
namespace dice { namespace hfe {

void setSuicide(void* self, bool b) {
    *(unsigned char*)((char*)self + 0xf6) = (unsigned char)b;
}

}}

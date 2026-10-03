// FUNCTION: BF2 0x4a2490
// Player::setFlagHolder 0x4a2490 — store byte
namespace dice { namespace hfe {

void setFlagHolder(void* self, bool b) {
    *(unsigned char*)((char*)self + 0x168) = (unsigned char)b;
}

}}

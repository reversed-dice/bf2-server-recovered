// FUNCTION: BF2 0x4a29b0
// Player::getIsGassed 0x4a29b0 — float > const
namespace dice { namespace hfe {

bool getIsGassed(void* self) {
    return *(float*)((char*)self + 0x42c) > *(float*)0xb2d910;
}

}}

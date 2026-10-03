// FUNCTION: BF2 0x4a2440
// Player::getPing 0x4a2440 — dword
namespace dice { namespace hfe {

int getPing(void* self) {
    return *(int*)((char*)self + 0x118);
}

}}

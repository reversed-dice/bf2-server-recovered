// FUNCTION: BF2 0x4a2370
// Player::getTeam 0x4a2370 — dword
namespace dice { namespace hfe {

int getTeam(void* self) {
    return *(int*)((char*)self + 0xf8);
}

}}

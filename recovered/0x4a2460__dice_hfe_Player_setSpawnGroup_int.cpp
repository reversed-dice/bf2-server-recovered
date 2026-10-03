// FUNCTION: BF2 0x4a2460
// Player::setSpawnGroup 0x4a2460 — dword
namespace dice { namespace hfe {

void setSpawnGroup(void* self, int g) {
    *(int*)((char*)self + 0x110) = g;
}

}}

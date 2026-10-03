// FUNCTION: BF2 0x4a2470
// Player::getSpawnGroup 0x4a2470 — dword
namespace dice { namespace hfe {

int getSpawnGroup(void* self) {
    return *(int*)((char*)self + 0x110);
}

}}

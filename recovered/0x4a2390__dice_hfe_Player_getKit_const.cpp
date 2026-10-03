// FUNCTION: BF2 0x4a2390
// Player::getKit 0x4a2390 — dword
namespace dice { namespace hfe {

int getKit(void* self) {
    return *(int*)((char*)self + 0x78);
}

}}

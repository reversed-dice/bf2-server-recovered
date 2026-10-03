// FUNCTION: BF2 0x4a2380
// Player::setKit 0x4a2380 — dword
namespace dice { namespace hfe {

void setKit(void* self, int kit) {
    *(int*)((char*)self + 0x78) = kit;
}

}}

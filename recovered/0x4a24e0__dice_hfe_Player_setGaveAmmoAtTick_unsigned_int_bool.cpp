// FUNCTION: BF2 0x4a24e0
// Player::setGaveAmmoAtTick 0x4a24e0 — 2 stores
namespace dice { namespace hfe {

void setGaveAmmoAtTick(void* self, unsigned int tick, bool b) {
    *(unsigned int*)((char*)self + 0x170) = tick;
    *(unsigned char*)((char*)self + 0x17a) = (unsigned char)b;
}

}}

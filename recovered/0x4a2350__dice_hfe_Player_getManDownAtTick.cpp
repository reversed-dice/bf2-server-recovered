// FUNCTION: BF2 0x4a2350
// Player::getManDownAtTick 0x4a2350 — flag + tick
namespace dice { namespace hfe {

int getManDownAtTick(void* self) {
    if (*(unsigned char*)((char*)self + 0x108) == 0)
        return 0;
    return *(int*)((char*)self + 0x10c);
}

}}

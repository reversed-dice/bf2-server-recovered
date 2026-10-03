// FUNCTION: BF2 0x4a24b0
// Player::setHealRepairedAtTick 0x4a24b0 — 3 stores
namespace dice { namespace hfe {

void setHealRepairedAtTick(void* self, unsigned int tick, bool a, bool b) {
    *(unsigned int*)((char*)self + 0x16c) = tick;
    *(unsigned char*)((char*)self + 0x178) = (unsigned char)a;
    *(unsigned char*)((char*)self + 0x179) = (unsigned char)b;
}

}}

// FUNCTION: BF2 0x548a10
// Soldier::setLadderId 0x548a10 — store + byte + tail-call
namespace dice { namespace hfe { namespace world {

extern void soldier_ladder(void* self);

void setLadderId(void* self, unsigned int id) {
    *(unsigned int*)((char*)self + 0x4e8) = id;
    *(unsigned char*)((char*)self + 0x48c) = 0;
    soldier_ladder(self);
}

}}}

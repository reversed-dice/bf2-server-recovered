// FUNCTION: BF2 0x590790
// EffectProperties::getPropertyUsed 0x590790 — flag indexé
namespace dice { namespace hfe { namespace world {

unsigned char getPropertyUsed(void* self, int prop) {
    return *(unsigned char*)((char*)self + (long)prop + 0x158);
}

}}}

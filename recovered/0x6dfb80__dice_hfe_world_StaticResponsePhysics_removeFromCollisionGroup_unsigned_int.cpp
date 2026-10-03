// FUNCTION: BF2 0x6dfb80
// StaticResponsePhysics::removeFromCollisionGroup 0x6dfb80 — bit clear
namespace dice { namespace hfe { namespace world {

void removeFromCollisionGroup(void* self, unsigned int group) {
    *(unsigned int*)((char*)self + 0x30) &= ~group;
}

}}}

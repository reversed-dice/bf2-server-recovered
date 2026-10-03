// FUNCTION: BF2 0x7919e0
// WeaponObject::getSoundSphereRadius 0x7919e0 — float [0x24]
namespace dice { namespace hfe { namespace ai {

float getSoundSphereRadius(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x24);
}

}}}

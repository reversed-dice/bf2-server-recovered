// FUNCTION: BF2 0x7918f0
// WeaponObject::getExplosionRadius 0x7918f0 — float [0x20]
namespace dice { namespace hfe { namespace ai {

float getExplosionRadius(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x20);
}

}}}

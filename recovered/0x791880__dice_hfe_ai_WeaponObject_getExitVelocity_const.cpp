// FUNCTION: BF2 0x791880
// WeaponObject::getExitVelocity 0x791880 — float [0x28]
namespace dice { namespace hfe { namespace ai {

float getExitVelocity(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x28);
}

}}}

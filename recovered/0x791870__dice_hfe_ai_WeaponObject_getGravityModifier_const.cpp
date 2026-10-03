// FUNCTION: BF2 0x791870
// WeaponObject::getGravityModifier 0x791870 — float [0x2c]
namespace dice { namespace hfe { namespace ai {

float getGravityModifier(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x2c);
}

}}}

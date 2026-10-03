// FUNCTION: BF2 0x7918d0
// WeaponObject::getOptimalRangePercentage 0x7918d0 — float [0x50]
namespace dice { namespace hfe { namespace ai {

float getOptimalRangePercentage(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x50);
}

}}}

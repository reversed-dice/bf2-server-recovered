// FUNCTION: BF2 0x7918c0
// WeaponObject::getAllowedDeviation 0x7918c0 — float [0x4c]
namespace dice { namespace hfe { namespace ai {

float getAllowedDeviation(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x4c);
}

}}}

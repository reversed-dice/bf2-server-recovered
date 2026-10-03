// FUNCTION: BF2 0x7918a0
// WeaponObject::getMaxRange 0x7918a0 — float [0x1c]
namespace dice { namespace hfe { namespace ai {

float getMaxRange(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x1c);
}

}}}

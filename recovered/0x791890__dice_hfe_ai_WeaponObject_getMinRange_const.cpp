// FUNCTION: BF2 0x791890
// WeaponObject::getMinRange 0x791890 — float [0x18]
namespace dice { namespace hfe { namespace ai {

float getMinRange(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x18);
}

}}}

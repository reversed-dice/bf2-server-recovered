// FUNCTION: BF2 0x791860
// WeaponObject::getDrag 0x791860 — float [0x14]
namespace dice { namespace hfe { namespace ai {

float getDrag(void* self) {
    return *(float*)(*(char**)((char*)self + 0x18) + 0x14);
}

}}}

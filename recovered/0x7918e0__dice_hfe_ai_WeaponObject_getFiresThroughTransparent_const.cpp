// FUNCTION: BF2 0x7918e0
// WeaponObject::getFiresThroughTransparent 0x7918e0 — byte
namespace dice { namespace hfe { namespace ai {

unsigned char getFiresThroughTransparent(void* self) {
    return *(unsigned char*)(*(char**)((char*)self + 0x18) + 0x54);
}

}}}

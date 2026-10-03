// FUNCTION: BF2 0x791830
// WeaponObject::getIndirect 0x791830 — byte [0]
namespace dice { namespace hfe { namespace ai {

unsigned char getIndirect(void* self) {
    return *(unsigned char*)(*(char**)((char*)self + 0x18));
}

}}}

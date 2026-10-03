// FUNCTION: BF2 0x791920
// WeaponObject::getWeaponActivate 0x791920 — dword [0x58]
namespace dice { namespace hfe { namespace ai {

int getWeaponActivate(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0x58);
}

}}}

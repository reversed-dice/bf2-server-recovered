// FUNCTION: BF2 0x791950
// WeaponObject::getWeaponAltFire 0x791950 — dword [0x64]
namespace dice { namespace hfe { namespace ai {

int getWeaponAltFire(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0x64);
}

}}}

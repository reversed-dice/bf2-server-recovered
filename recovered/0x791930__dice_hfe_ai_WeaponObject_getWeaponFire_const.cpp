// FUNCTION: BF2 0x791930
// WeaponObject::getWeaponFire 0x791930 — dword [0x5c]
namespace dice { namespace hfe { namespace ai {

int getWeaponFire(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0x5c);
}

}}}

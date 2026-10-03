// FUNCTION: BF2 0x791850
// WeaponObject::getMaxAmmoInMag 0x791850 — dword [0xc]
namespace dice { namespace hfe { namespace ai {

int getMaxAmmoInMag(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0xc);
}

}}}

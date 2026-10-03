// FUNCTION: BF2 0x791940
// WeaponObject::getWeaponZoom 0x791940 — dword
namespace dice { namespace hfe { namespace ai {

int getWeaponZoom(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0x60);
}

}}}

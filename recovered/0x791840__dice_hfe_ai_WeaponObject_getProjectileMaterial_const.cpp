// FUNCTION: BF2 0x791840
// WeaponObject::getProjectileMaterial 0x791840 — dword [0x4]
namespace dice { namespace hfe { namespace ai {

int getProjectileMaterial(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 4);
}

}}}

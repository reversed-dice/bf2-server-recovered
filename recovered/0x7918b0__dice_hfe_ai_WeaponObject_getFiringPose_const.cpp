// FUNCTION: BF2 0x7918b0
// WeaponObject::getFiringPose 0x7918b0 — dword [0x48]
namespace dice { namespace hfe { namespace ai {

int getFiringPose(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 0x48);
}

}}}

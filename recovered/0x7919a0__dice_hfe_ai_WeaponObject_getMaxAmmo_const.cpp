// FUNCTION: BF2 0x7919a0
// WeaponObject::getMaxAmmo 0x7919a0 — dword [0x8]
namespace dice { namespace hfe { namespace ai {

int getMaxAmmo(void* self) {
    return *(int*)(*(char**)((char*)self + 0x18) + 8);
}

}}}

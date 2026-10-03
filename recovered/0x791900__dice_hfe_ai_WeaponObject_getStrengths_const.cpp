// FUNCTION: BF2 0x791900
// WeaponObject::getStrengths 0x791900 — ptr [0x40]
namespace dice { namespace hfe { namespace ai {

void* getStrengths(void* self) {
    return *(void**)(*(char**)((char*)self + 0x18) + 0x40);
}

}}}

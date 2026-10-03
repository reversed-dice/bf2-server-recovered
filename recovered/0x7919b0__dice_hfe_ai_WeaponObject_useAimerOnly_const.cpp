// FUNCTION: BF2 0x7919b0
// WeaponObject::useAimerOnly 0x7919b0 — byte [0x3]
namespace dice { namespace hfe { namespace ai {

unsigned char useAimerOnly(void* self) {
    return *(unsigned char*)(*(char**)((char*)self + 0x18) + 3);
}

}}}

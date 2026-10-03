// FUNCTION: BF2 0x536ac0
namespace dice { namespace hfe { namespace world {
unsigned int get_536ac0(void* p) {
    void* q = *(void**)((char*)p + 0x4b8);
    return q ? *(unsigned int*)((char*)q + 0xc) : 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getContactInfo (0x536ac0)

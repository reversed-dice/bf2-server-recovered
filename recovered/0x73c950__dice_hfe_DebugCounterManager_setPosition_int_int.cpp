// FUNCTION: BF2 0x73c950
namespace dice { namespace hfe { namespace world {
void set_0x73c950(void* p, unsigned int a1, unsigned int a2) {
    *(unsigned int*)((char*)p + 0x1c) = a1;
    *(unsigned int*)((char*)p + 0x20) = a2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_DebugCounterManager_setPosition_int_int (0x73c950)

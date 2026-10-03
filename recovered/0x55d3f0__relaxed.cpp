// FUNCTION: BF2 0x55d3f0
namespace dice { namespace hfe { namespace world {

void fn_0x55d4a0(void* self, float amount) {
    float cur = *(float*)((char*)self+0x244);
    if (amount < cur) {
        *(float*)((char*)self+0x244) = cur - amount;
        return;
    }
    float cur2 = *(float*)((char*)self+0x24c);
    *(float*)((char*)self+0x24c) = cur2 - amount;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_SubtractHeal_float (0x55d4a0)

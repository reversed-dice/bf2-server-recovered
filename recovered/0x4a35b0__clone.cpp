// FUNCTION: BF2 0x4a35b0
namespace dice { namespace hfe { namespace world {

bool fn_0x4a3510(void* self, float amount) {
    float cur = *(float*)((char*)self+0x2c);
    if (amount > cur) return false;
    cur -= amount;
    *(float*)((char*)self+0x2c) = cur;
    return true;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_receiveHealScore_float (0x4a3510)

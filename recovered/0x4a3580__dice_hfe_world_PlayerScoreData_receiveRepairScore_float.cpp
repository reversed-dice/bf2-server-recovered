// FUNCTION: BF2 0x4a3580
namespace dice { namespace hfe { namespace world {

bool fn_0x4a3580(void* self, float amount) {
    float cur = *(float*)((char*)self+0x28);
    if (amount > cur) return false;
    cur -= amount;
    *(float*)((char*)self+0x28) = cur;
    return true;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_receiveRepairScore_float (0x4a3580)

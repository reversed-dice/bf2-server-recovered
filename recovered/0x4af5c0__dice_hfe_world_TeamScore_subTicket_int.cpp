// FUNCTION: BF2 0x4af5c0
namespace dice { namespace hfe {
void fn_0x4af5c0(void* self, int amount) {
    int v = *(int*)((char*)self+0x84) - amount;
    *(int*)((char*)self+0x84) = v >= 0 ? v : 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_TeamScore_subTicket_int (0x4af5c0)

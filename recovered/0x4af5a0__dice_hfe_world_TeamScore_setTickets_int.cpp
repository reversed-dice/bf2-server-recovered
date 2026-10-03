// FUNCTION: BF2 0x4af5a0
namespace dice { namespace hfe { namespace world {

void fn_0x4af5a0(void* self, int val) {
    int v = 0;
    if (val >= 0) v = val;
    int r = (v < 10000) ? v : 9999;
    *(int*)((char*)self+0x84) = r;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TeamScore_setTickets_int (0x4af5a0)

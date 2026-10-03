// FUNCTION: BF2 0x799a90
namespace dice { namespace hfe { namespace ai {
void* fn_0x799a90(void* self, int id) {
    if (id < 0) return 0;
    long idx = id;
    void** arr = *(void***)((char*)self+8);
    return arr[idx];
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayerFactory_getPlayerFromId_int (0x799a90)

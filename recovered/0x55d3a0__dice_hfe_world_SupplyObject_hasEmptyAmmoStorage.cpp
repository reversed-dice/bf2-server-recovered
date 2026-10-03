// FUNCTION: BF2 0x55d3a0
namespace dice { namespace hfe { namespace world {
extern float DAT_00b2f3c0;
extern float DAT_00b34b64;
bool fn_55d3a0(long param_1) {
    long base = *(long*)(param_1 + 0x238);
    if (*(float*)(base + 0x214) == DAT_00b2f3c0) {
        return false;
    }
    float f2 = *(float*)(base + 0x208) / DAT_00b34b64;
    if (f2 < *(float*)(param_1 + 0x248)) {
        return false;
    }
    if (f2 < *(float*)(param_1 + 0x24c)) {
        return false;
    }
    return true;
}
} } }
